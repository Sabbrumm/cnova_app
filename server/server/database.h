
#ifndef DATABASE_H
#define DATABASE_H

#include <QtSql/QSqlDatabase>



class Database
{
    QSqlDatabase DB;
    QByteArray json_query(QString query);

public:
    Database();
    QByteArray search_by_student_num(QString stud_number);
    QByteArray search_by_last_name(QString last_name);
    QByteArray search_by_full_name(QString last_name,
                                   QString first_name,
                                   QString middle_name);
    QByteArray search_by_group(QString group_id);
    void add_student(QString last_name,
                     QString first_name,
                     QString middle_name,
                     QString gender,
                     QString group_id,
                     QString student_num);
    void remove_student(int id);

};

#endif // DATABASE_H
