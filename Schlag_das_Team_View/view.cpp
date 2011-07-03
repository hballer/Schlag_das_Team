#include "view.h"
#include "ui_view.h"


View::View(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::View)
{
    ui->setupUi(this);
    QString blub;
    QPixmap logopixmap;
    QPixmap stonespixmap;
    if (!logopixmap.load("logo.png"))
        blub.append("Logo konnte nicht geladen werden");
    logo.addPixmap(logopixmap);
    logo.setSceneRect(logopixmap.rect());
    ui->graphicsViewLogo->setScene(&logo);
    ui->graphicsViewLogo->setSceneRect(logo.sceneRect());
    ui->graphicsViewLogo->show();
    if (!stonespixmap.load("Stones.jpg"))
        blub.append("Stones konnte nicht geladen werden");
    stones.addPixmap(stonespixmap);
    stones.setSceneRect(stonespixmap.rect());
    ui->graphicsViewStones->setScene(&stones);
    ui->graphicsViewStones->setSceneRect(stones.sceneRect());
    ui->graphicsViewStones->show();
    this->showFullScreen();
    ui->stackedWidget->setCurrentIndex(0);
    //QHostAddress(QHostAddress::toIPv4Address().toString();
    QNetworkInterface* test = new QNetworkInterface();

    int i;
    for (i = 0; i< test->allAddresses().size(); ++i)
    {
        if (test->allAddresses().at(i).toIPv4Address())
        {
            blub.append(QHostAddress(test->allAddresses().at(i).toIPv4Address()).toString());
            blub.append("|");
        }
    }
    ui->labelIPValue->setText(blub);
    if (socket.bind(12345))
    {
        ShowConnectionStatus("Listening on port 12345");
    }
    else
    {
        ShowConnectionStatus("Error");
    }
    m_countdowntime = 60;
    m_countdowntimer = new QTimer(this);
    connect(&socket,SIGNAL(readyRead()),this,SLOT(processData()));
    connect(m_countdowntimer,SIGNAL(timeout()),this,SLOT(countOneDown()));
    m_PPAnswers.push_back(ui->labelPPAnswer01);
    m_PPAnswers.push_back(ui->labelPPAnswer02);
    m_PPAnswers.push_back(ui->labelPPAnswer03);
    m_PPAnswers.push_back(ui->labelPPAnswer04);
    m_PPAnswers.push_back(ui->labelPPAnswer05);
    m_PPAnswers.push_back(ui->labelPPAnswer06);
    m_PPAnswers.push_back(ui->labelPPAnswer07);
    m_PPAnswers.push_back(ui->labelPPAnswer08);
    m_PPAnswers.push_back(ui->labelPPAnswer09);
    m_PPAnswers.push_back(ui->labelPPAnswer10);
    m_PPAnswers.push_back(ui->labelPPAnswer11);
    m_PPAnswers.push_back(ui->labelPPAnswer12);
    m_PPAnswers.push_back(ui->labelPPAnswer13);
    m_PPAnswers.push_back(ui->labelPPAnswer14);
    m_PPAnswers.push_back(ui->labelPPAnswer15);
    m_PPAnswers.push_back(ui->labelPPAnswer16);
    m_PPAnswers.push_back(ui->labelPPAnswer17);
    m_PPAnswers.push_back(ui->labelPPAnswer18);
    m_PPAnswers.push_back(ui->labelPPAnswer19);
    m_PPAnswers.push_back(ui->labelPPAnswer20);
    m_PPAnswers.push_back(ui->labelPPAnswer21);
    m_PPAnswers.push_back(ui->labelPPAnswer22);
    m_PPAnswers.push_back(ui->labelPPAnswer23);
    m_PPAnswers.push_back(ui->labelPPAnswer24);
    m_PPAnswers.push_back(ui->labelPPAnswer25);
    m_PPAnswers.push_back(ui->labelPPAnswer26);
    m_PPAnswers.push_back(ui->labelPPAnswer27);
    m_PPAnswers.push_back(ui->labelPPAnswer28);
    m_PPAnswers.push_back(ui->labelPPAnswer29);
    m_PPAnswers.push_back(ui->labelPPAnswer30);
    m_PPAnswers.push_back(ui->labelPPAnswer31);
    m_PPAnswers.push_back(ui->labelPPAnswer32);
    m_PPAnswers.push_back(ui->labelPPAnswer33);
    m_PPAnswers.push_back(ui->labelPPAnswer34);
    m_PPAnswers.push_back(ui->labelPPAnswer35);
    m_PPAnswers.push_back(ui->labelPPAnswer36);
    for (int i=0; i!=m_PPAnswers.size();i++)
    {
        m_PPAnswers[i]->setText("");
        m_PPAnswers[i]->setVisible(false);
    }
    ui->labelA11->setVisible(false);
    ui->labelA12->setVisible(false);
    ui->labelA13->setVisible(false);
    ui->labelA14->setVisible(false);
    ui->labelA15->setVisible(false);
    ui->labelB11->setVisible(false);
    ui->labelB12->setVisible(false);
    ui->labelB13->setVisible(false);
    ui->labelB14->setVisible(false);
    ui->labelB15->setVisible(false);
}

View::~View()
{
    delete ui;
}

void View::ShowConnectionStatus(QString message)
{
    ui->labelStatus->setText("Status: "+message);
}

void View::processData()
{
    QByteArray datagram;
    ShowConnectionStatus("Data");
    while (socket.hasPendingDatagrams())
    {
        datagram.resize(socket.pendingDatagramSize());
        socket.readDatagram(datagram.data(),datagram.size());

        QString type;

        QDataStream in(&datagram, QIODevice::ReadOnly);
        in.setVersion(QDataStream::Qt_4_6);
        in >> type;
        if (type == "Ping")
        {
            ShowConnectionStatus("Received ping.");
        }
        //else if (type == "")
        else if (type == "Reset Countdown")
        {
            //m_countdowntimer
            in >> m_countdowntime;
            m_countdowntimer->stop();
            QString time;
            time.setNum(m_countdowntime);
            ui->labelCountDown->setText(time);
        }
        else if (type == "Start Countdown")
        {
            m_countdowntimer->setInterval(1000);
            m_countdowntimer->start();
        }
        else if (type == "Update Name")
        {
            QString nameA,nameB;
            in >> nameA >> nameB;
            ui->labelNameA->setText(nameA);
            ui->labelNameB->setText(nameB);
        }
        else if (type == "Update Score")
        {
            QString highlightStyle = "QWidget {background:rgb(22, 11, 244); color:rgb(255, 255, 255);}";
            QString defaultStyle = "QWidget {background:rgb(0, 0, 0); color:rgb(255, 255, 255);}";
            quint32 scoreA,sumA,scoreB,sumB;
            in >> scoreA >> sumA >> scoreB >> sumB;
            ui->lcdNumberSumA->display((int)sumA);
            if (scoreA%2==1)
                ui->labelA15->setStyleSheet(highlightStyle);
            else
                ui->labelA15->setStyleSheet(defaultStyle);
            scoreA>>=1;
            if (scoreA%2==1)
                ui->labelA14->setStyleSheet(highlightStyle);
            else
                ui->labelA14->setStyleSheet(defaultStyle);
            scoreA>>=1;
            if (scoreA%2==1)
                ui->labelA13->setStyleSheet(highlightStyle);
            else
                ui->labelA13->setStyleSheet(defaultStyle);
            scoreA>>=1;
            if (scoreA%2==1)
                ui->labelA12->setStyleSheet(highlightStyle);
            else
                ui->labelA12->setStyleSheet(defaultStyle);
            scoreA>>=1;
            if (scoreA%2==1)
                ui->labelA11->setStyleSheet(highlightStyle);
            else
                ui->labelA11->setStyleSheet(defaultStyle);
            scoreA>>=1;
            if (scoreA%2==1)
                ui->labelA10->setStyleSheet(highlightStyle);
            else
                ui->labelA10->setStyleSheet(defaultStyle);
            scoreA>>=1;
            if (scoreA%2==1)
                ui->labelA9->setStyleSheet(highlightStyle);
            else
                ui->labelA9->setStyleSheet(defaultStyle);
            scoreA>>=1;
            if (scoreA%2==1)
                ui->labelA8->setStyleSheet(highlightStyle);
            else
                ui->labelA8->setStyleSheet(defaultStyle);
            scoreA>>=1;
            if (scoreA%2==1)
                ui->labelA7->setStyleSheet(highlightStyle);
            else
                ui->labelA7->setStyleSheet(defaultStyle);
            scoreA>>=1;
            if (scoreA%2==1)
                ui->labelA6->setStyleSheet(highlightStyle);
            else
                ui->labelA6->setStyleSheet(defaultStyle);
            scoreA>>=1;
            if (scoreA%2==1)
                ui->labelA5->setStyleSheet(highlightStyle);
            else
                ui->labelA5->setStyleSheet(defaultStyle);
            scoreA>>=1;
            if (scoreA%2==1)
                ui->labelA4->setStyleSheet(highlightStyle);
            else
                ui->labelA4->setStyleSheet(defaultStyle);
            scoreA>>=1;
            if (scoreA%2==1)
                ui->labelA3->setStyleSheet(highlightStyle);
            else
                ui->labelA3->setStyleSheet(defaultStyle);
            scoreA>>=1;
            if (scoreA%2==1)
                ui->labelA2->setStyleSheet(highlightStyle);
            else
                ui->labelA2->setStyleSheet(defaultStyle);
            scoreA>>=1;
            if (scoreA%2==1)
                ui->labelA1->setStyleSheet(highlightStyle);
            else
                ui->labelA1->setStyleSheet(defaultStyle);
            if (scoreB%2==1)
                ui->labelB15->setStyleSheet(highlightStyle);
            else
                ui->labelB15->setStyleSheet(defaultStyle);
            scoreB>>=1;
            if (scoreB%2==1)
                ui->labelB14->setStyleSheet(highlightStyle);
            else
                ui->labelB14->setStyleSheet(defaultStyle);
            scoreB>>=1;
            if (scoreB%2==1)
                ui->labelB13->setStyleSheet(highlightStyle);
            else
                ui->labelB13->setStyleSheet(defaultStyle);
            scoreB>>=1;
            if (scoreB%2==1)
                ui->labelB12->setStyleSheet(highlightStyle);
            else
                ui->labelB12->setStyleSheet(defaultStyle);
            scoreB>>=1;
            if (scoreB%2==1)
                ui->labelB11->setStyleSheet(highlightStyle);
            else
                ui->labelB11->setStyleSheet(defaultStyle);
            scoreB>>=1;
            if (scoreB%2==1)
                ui->labelB10->setStyleSheet(highlightStyle);
            else
                ui->labelB10->setStyleSheet(defaultStyle);
            scoreB>>=1;
            if (scoreB%2==1)
                ui->labelB9->setStyleSheet(highlightStyle);
            else
                ui->labelB9->setStyleSheet(defaultStyle);
            scoreB>>=1;
            if (scoreB%2==1)
                ui->labelB8->setStyleSheet(highlightStyle);
            else
                ui->labelB8->setStyleSheet(defaultStyle);
            scoreB>>=1;
            if (scoreB%2==1)
                ui->labelB7->setStyleSheet(highlightStyle);
            else
                ui->labelB7->setStyleSheet(defaultStyle);
            scoreB>>=1;
            if (scoreB%2==1)
                ui->labelB6->setStyleSheet(highlightStyle);
            else
                ui->labelB6->setStyleSheet(defaultStyle);
            scoreB>>=1;
            if (scoreB%2==1)
                ui->labelB5->setStyleSheet(highlightStyle);
            else
                ui->labelB5->setStyleSheet(defaultStyle);
            scoreB>>=1;
            if (scoreB%2==1)
                ui->labelB4->setStyleSheet(highlightStyle);
            else
                ui->labelB4->setStyleSheet(defaultStyle);
            scoreB>>=1;
            if (scoreB%2==1)
                ui->labelB3->setStyleSheet(highlightStyle);
            else
                ui->labelB3->setStyleSheet(defaultStyle);
            scoreB>>=1;
            if (scoreB%2==1)
                ui->labelB2->setStyleSheet(highlightStyle);
            else
                ui->labelB2->setStyleSheet(defaultStyle);
            scoreB>>=1;
            if (scoreB%2==1)
                ui->labelB1->setStyleSheet(highlightStyle);
            else
                ui->labelB1->setStyleSheet(defaultStyle);
            ui->lcdNumberSumB->display((int)sumB);
        }
        else if (type == "Message")
        {
            QString msgStr;
            in >> msgStr;
            ui->labelMessage->setText(msgStr);
        }
        else if (type == "SwitchWindow")
        {
            QString window;
            in >> window;
            if (window == "View")
            {
                HWND handle;
                handle = FindWindow(NULL,L"View");
                if(handle)
                {
                    SetForegroundWindow(handle);
                }
            }
            else if (window == "Stream")
            {
                HWND handle;
                handle = FindWindow(NULL,L"Windows Media Player");
                if(handle)
                {
                    SetForegroundWindow(handle);
                }
            }
            else if (window == "Camera")
            {
                HWND handle;
                handle = FindWindow(NULL,L"DTV (DVB-Terrestrial)");
                if(handle)
                {
                    SetForegroundWindow(handle);
                }
            }
        }
        else if (type == "PPPrepare")
        {
            QString gameName;
            in >> gameName;
            if (gameName != "- Empty -")
            {
                ui->labelPPGame->setText(gameName);
            }
            else
            {
                ui->labelPPGame->setText("");
            }
        }
        else if (type == "PPStart")
        {
            int numAnswers;
            in >> numAnswers;
            //ui->labelPPName->setText(QString().setNum(numAnswers));
            //m_PPAnswers[i]->setVisible(false);
            for (int i = 0; i != m_PPAnswers.size(); i++)
            {
                m_PPAnswers[i]->setStyleSheet("QWidget {background: rgb(68, 68, 68); color: rgb(68, 68, 68)}");
            }
            for (int i = 0; i != numAnswers; i++)
            {
                m_PPAnswers[i]->setVisible(true);
            }
        }
        else if (type == "PPClick")
        {
            int numAnswer;
            bool clickStatus;
            QString answer;
            in >> numAnswer >> clickStatus >> answer;
            if (clickStatus)
            {
                m_PPAnswers[numAnswer]->setText(answer);
                m_PPAnswers[numAnswer]->setStyleSheet("QWidget {background: qlineargradient(spread:pad, x1:0.777, y1:0.909, x2:1, y2:0.949, stop:0 rgba(0, 0, 255, 255), stop:1 rgba(255, 255, 255, 0)); color: rgb(255, 255, 255)}");
            }
            else
            {
                m_PPAnswers[numAnswer]->setText("");
                m_PPAnswers[numAnswer]->setStyleSheet("QWidget {background: rgb(68, 68, 68); color: rgb(68, 68, 68)}");
            }
        }
        else if (type == "PPStop")
        {
            for (int i = 0; i != m_PPAnswers.size(); i++)
            {
                m_PPAnswers[i]->setVisible(false);
                m_PPAnswers[i]->setText("");
                ui->labelPPGame->setText("");
            }
        }
        else if (type == "ShowScreen")
        {
            QString screenType;
            in >> screenType;
            if (screenType == "Connection")
            {
                ui->stackedWidget->setCurrentIndex(0);
            }
            else if (screenType == "Logo")
            {
                ui->stackedWidget->setCurrentIndex(1);
            }
            else if (screenType == "Countdown")
            {
                ui->stackedWidget->setCurrentIndex(2);
            }
            else if (screenType == "Score")
            {
                ui->stackedWidget->setCurrentIndex(3);
            }
            else if (screenType == "PPGame")
            {
                ui->stackedWidget->setCurrentIndex(4);
            }
            else if (screenType == "Stones")
            {
                ui->stackedWidget->setCurrentIndex(5);
            }
        }
    }
}

void View::countOneDown()
{
    m_countdowntime--;
    QString time;
    time.setNum(m_countdowntime);
    ui->labelCountDown->setText(time);
    if (m_countdowntime<1)
    {
        m_countdowntimer->stop();
    }
}
