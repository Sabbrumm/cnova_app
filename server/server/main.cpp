#include <QCoreApplication>

#include <QtNetwork/QTcpSocket>
#include <iostream>
#include "database.h"

using namespace std;

int main()
{
    Database db;
    db.json_query("SELECT * FROM Users");
    return 0;
}
