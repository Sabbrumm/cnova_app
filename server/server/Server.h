
#ifndef SERVER_H
#define SERVER_H

#include <QTCPSocket>
#include <QTcpServer>
#include <database.h>

enum Methods: quint16{
    checkConnection,
    addUser,
    studnum,
    lastname,
    fullname,
    group,
    selectAll,
    deleteUser,
    serverError
};

enum AnswerType{
    Success,
    Error
};


class Server: public QObject
{
    Q_OBJECT

    QTcpServer* tcpServer = new QTcpServer();
    Database *DB = new Database();
    QByteArray prepare_answer(Methods method, QByteArray data);

public:
    Server(QObject *parent =nullptr);

private slots:
    void process_connection();
    void readyRead();
};

#endif // SERVER_H
