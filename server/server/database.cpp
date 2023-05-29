
#include "database.h"
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QDebug>
#include <QJsonArray>
#include <QJsonValue>
#include <QJsonObject>
#include <QJsonDocument>
#include <string.h>
#include <sstream>

Database::Database()
{
    try{
        this->DB = QSqlDatabase::addDatabase("QPSQL");
        DB.setDatabaseName("cnovaapp");
        DB.setHostName("localhost");
        DB.setUserName("postgres");
        DB.setPassword("123");
        if (not DB.open()){
            qDebug() << "FUCK!!!!";
        }
    }
    catch(std::exception &err){
        qDebug() << err.what();
    }


}


QByteArray Database::search_by_student_num(QString stud_number)
{
    QString query =
        QString("SELECT * from users where ") +
        QString("student_num = \'") + stud_number + "\'";

    return json_query(query);
}

QByteArray Database::search_by_last_name(QString last_name)
{
    QString query =
        QString("SELECT * from users where ") +
        QString("last_name = \'") + last_name + "\'";

    return json_query(query);
}

QByteArray Database::search_by_full_name(QString last_name, QString first_name, QString middle_name)
{
    QString query =
        QString("SELECT * from users where ") +
        QString("last_name = \'") + last_name + "\'"+
        " and first_name = \'" + first_name + "\'"+
        " and middle_name = \'" + middle_name + "\'";

    return json_query(query);
}

QByteArray Database::search_by_group(QString group_id)
{
    QString query =
        QString("SELECT * from users where ") +
        QString("group_id = \'") + group_id + "\'";

    return json_query(query);
}

QByteArray Database::get_all()
{
    QString query =
        QString("SELECT * from users");

    return json_query(query);
}

QString Database::get_count_in_group_new(QString group_id)
{
    QString query = QString("SELECT student_num FROM users where group_id = \'")+
                    group_id+QString("\'")+
                    QString(" ORDER BY student_num DESC");
    QSqlQuery _qr(this->DB);

    if (not _qr.exec(query)){
        qDebug() << _qr.lastError().text();
    }

    int val=0;
    if (_qr.next()) {
        val = _qr.value(0).toInt()+1;
    }
    else {
        val = QVariant(group_id+QString("01")).toInt();
    }

    return QString::number(val);

}

int Database::add_student(QString last_name, QString first_name, QString middle_name, QString gender, QString group_id, QString student_num)
{
    QString query =
        QString("INSERT INTO users values(") +
        "DEFAULT,"+
        "'"+first_name+"',"+
        "'"+last_name+"',"+
        "'"+middle_name+"',"+
        "'"+gender+"',"+
        "'"+group_id+"',"+
        "'"+student_num+"')";

    json_query(query);
    return 1;
}
int Database::remove_student(QString student_num)
{
    QString query =
        QString("DELETE from users where ") +
        QString("student_num = \'") + student_num + "\'";
    json_query(query);
    return 1;
}

QByteArray Database::json_query(QString query) {
    QSqlQuery _qr(this->DB);
    QJsonArray students_arr;

    if (not _qr.exec(query)){
        qDebug() << _qr.lastError().text();
        return QByteArray();
    }
    while (_qr.next()) {
        QJsonObject student;
        student["id"] = _qr.value(0).toInt();
        student["first_name"] = _qr.value(1).toString();
        student["last_name"] = _qr.value(2).toString();
        student["middle_name"] = _qr.value(3).toString();
        student["gender"] = _qr.value(4).toString();
        student["group_id"] = _qr.value(5).toString();
        student["student_num"] = _qr.value(6).toString();
        students_arr.append(student);
    }
    QJsonDocument doc;
    doc.setArray(students_arr);

    QString dataToString(doc.toJson(QJsonDocument::JsonFormat::Compact));

    return QByteArray(dataToString.toUtf8());

}
