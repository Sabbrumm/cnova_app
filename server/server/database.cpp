
#include "database.h"
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QDebug>
#include <QJsonArray>
#include <QJsonValue>
#include <QJsonObject>
#include <QJsonDocument>
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

}

QByteArray Database::search_by_last_name(QString last_name)
{

}

QByteArray Database::search_by_full_name(QString last_name, QString first_name, QString middle_name)
{

}

QByteArray Database::search_by_group(QString group_id)
{

}

void Database::add_student(QString last_name, QString first_name, QString middle_name, QString gender, QString group_id, QString student_num)
{

}
void Database::remove_student(int id)
{

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

    qDebug()<< dataToString;

    return QByteArray(dataToString.toUtf8());

}
