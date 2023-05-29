#include <QCoreApplication>

#include <QtNetwork/QTcpSocket>
#include <iostream>
#include "database.h"
#include "Server.h"

using namespace std;

int main(int argc, char* argv[])
{
    Database db;
    QCoreApplication a(argc, argv);
    Server server;

    //db.add_student("Timofeyev", "Ivan", "SOSISOVICH", "M", "2375", "237586");
    //qDebug() << db.search_by_student_num("237586");
    return a.exec();
}
