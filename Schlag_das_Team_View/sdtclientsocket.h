#ifndef SDTCLIENTSOCKET_H
#define SDTCLIENTSOCKET_H

#include <QTcpSocket>
#include <QMessageBox>

class SDTClientSocket : public QTcpSocket
{
    Q_OBJECT
public:
    QMessageBox msgBox;
    explicit SDTClientSocket(QObject *parent = 0);

public slots:
    void jippie();

};

#endif // SDTCLIENTSOCKET_H
