#ifndef VIEW_H
#define VIEW_H

#include <QWidget>
#include <QtNetwork/QNetworkInterface>
#include <QUdpSocket>
#include <QGraphicsScene>
#include <QTimer>
#include <QLabel>
#include <windows.h>
//#include "sdtserver.h"


namespace Ui {
    class View;
}

class View : public QWidget
{
    Q_OBJECT

public:
    QUdpSocket socket;
    QGraphicsScene logo;
    QGraphicsScene stones;
    QTimer *m_countdowntimer;
    int m_countdowntime;
    //SDTServer server;
    explicit View(QWidget *parent = 0);
    ~View();

    void ShowConnectionStatus(QString message);
    //void SetServerPort(int port);

private slots:
    void processData();
    void countOneDown();
    //void ShowMessage(QString);
    //void Connected();

private:
    Ui::View *ui;
    int m_port;
    QVector<QLabel*> m_PPAnswers;
};

#endif // VIEW_H
