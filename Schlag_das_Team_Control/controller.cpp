#include "controller.h"
#include "ui_controller.h"

Controller::Controller(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Controller)
{
    ui->setupUi(this);
    QObject::connect(ui->checkBoxA1,SIGNAL(clicked(bool)),this,SLOT(riseA1(bool)));
    QObject::connect(ui->checkBoxA2,SIGNAL(clicked(bool)),this,SLOT(riseA2(bool)));
    QObject::connect(ui->checkBoxA3,SIGNAL(clicked(bool)),this,SLOT(riseA3(bool)));
    QObject::connect(ui->checkBoxA4,SIGNAL(clicked(bool)),this,SLOT(riseA4(bool)));
    QObject::connect(ui->checkBoxA5,SIGNAL(clicked(bool)),this,SLOT(riseA5(bool)));
    QObject::connect(ui->checkBoxA6,SIGNAL(clicked(bool)),this,SLOT(riseA6(bool)));
    QObject::connect(ui->checkBoxA7,SIGNAL(clicked(bool)),this,SLOT(riseA7(bool)));
    QObject::connect(ui->checkBoxA8,SIGNAL(clicked(bool)),this,SLOT(riseA8(bool)));
    QObject::connect(ui->checkBoxA9,SIGNAL(clicked(bool)),this,SLOT(riseA9(bool)));
    QObject::connect(ui->checkBoxA10,SIGNAL(clicked(bool)),this,SLOT(riseA10(bool)));
    QObject::connect(ui->checkBoxA11,SIGNAL(clicked(bool)),this,SLOT(riseA11(bool)));
    QObject::connect(ui->checkBoxA12,SIGNAL(clicked(bool)),this,SLOT(riseA12(bool)));
    QObject::connect(ui->checkBoxA13,SIGNAL(clicked(bool)),this,SLOT(riseA13(bool)));
    QObject::connect(ui->checkBoxA14,SIGNAL(clicked(bool)),this,SLOT(riseA14(bool)));
    QObject::connect(ui->checkBoxA15,SIGNAL(clicked(bool)),this,SLOT(riseA15(bool)));
    QObject::connect(ui->checkBoxB1,SIGNAL(clicked(bool)),this,SLOT(riseB1(bool)));
    QObject::connect(ui->checkBoxB2,SIGNAL(clicked(bool)),this,SLOT(riseB2(bool)));
    QObject::connect(ui->checkBoxB3,SIGNAL(clicked(bool)),this,SLOT(riseB3(bool)));
    QObject::connect(ui->checkBoxB4,SIGNAL(clicked(bool)),this,SLOT(riseB4(bool)));
    QObject::connect(ui->checkBoxB5,SIGNAL(clicked(bool)),this,SLOT(riseB5(bool)));
    QObject::connect(ui->checkBoxB6,SIGNAL(clicked(bool)),this,SLOT(riseB6(bool)));
    QObject::connect(ui->checkBoxB7,SIGNAL(clicked(bool)),this,SLOT(riseB7(bool)));
    QObject::connect(ui->checkBoxB8,SIGNAL(clicked(bool)),this,SLOT(riseB8(bool)));
    QObject::connect(ui->checkBoxB9,SIGNAL(clicked(bool)),this,SLOT(riseB9(bool)));
    QObject::connect(ui->checkBoxB10,SIGNAL(clicked(bool)),this,SLOT(riseB10(bool)));
    QObject::connect(ui->checkBoxB11,SIGNAL(clicked(bool)),this,SLOT(riseB11(bool)));
    QObject::connect(ui->checkBoxB12,SIGNAL(clicked(bool)),this,SLOT(riseB12(bool)));
    QObject::connect(ui->checkBoxB13,SIGNAL(clicked(bool)),this,SLOT(riseB13(bool)));
    QObject::connect(ui->checkBoxB14,SIGNAL(clicked(bool)),this,SLOT(riseB14(bool)));
    QObject::connect(ui->checkBoxB15,SIGNAL(clicked(bool)),this,SLOT(riseB15(bool)));
    connect(ui->pushButtonPing,SIGNAL(clicked()),this,SLOT(ping()));
    connect(ui->pushButtonShowConnect,SIGNAL(clicked()),this,SLOT(showConnection()));
    connect(ui->pushButtonShowLogo,SIGNAL(clicked()),this,SLOT(showLogo()));
    connect(ui->pushButtonShowCountdown,SIGNAL(clicked()),this,SLOT(showCountdown()));
    connect(ui->pushButtonCountdownReset,SIGNAL(clicked()),this,SLOT(resetCountdown()));
    connect(ui->pushButtonStartCountdown,SIGNAL(clicked()),this,SLOT(startCountdown()));
    connect(ui->pushButtonShowScore,SIGNAL(clicked()),this,SLOT(showScore()));
    connect(ui->pushButtonUpdateNames,SIGNAL(clicked()),this,SLOT(updateName()));
    connect(ui->pushButtonUpdateScore,SIGNAL(clicked()),this,SLOT(updateScore()));
    connect(ui->pushButtonResetScore,SIGNAL(clicked()),this,SLOT(resetScore()));
    connect(ui->pushButtonShowCustom,SIGNAL(clicked()),this,SLOT(showCustomMessage()));
    connect(ui->pushButtonShowGameName,SIGNAL(clicked()),this,SLOT(showGameName()));
    //connect(ui->pushButtonShowStream1,SIGNAL(clicked()),this,SLOT(showStream1()));
    //connect(ui->pushButtonStream1Source,SIGNAL(clicked()),this,SLOT(loadStream1()));
    //connect(ui->pushButtonTest,SIGNAL(clicked()),this,SLOT(test()));
    connect(ui->pushButtonShowStream1,SIGNAL(clicked()),this,SLOT(switchStream1()));
    connect(ui->pushButtonCamera,SIGNAL(clicked()),this,SLOT(switchCamera()));
    connect(ui->pushButtonShowView,SIGNAL(clicked()),this,SLOT(switchBack()));
    connect(ui->comboBoxPPGames,SIGNAL(activated(int)),this,SLOT(DisplayPPGameLocal(int)));
    connect(ui->pushButtonPPPrepare,SIGNAL(clicked()),this,SLOT(PPPrepareGame()));
    connect(ui->pushButtonPPStart,SIGNAL(clicked()),this,SLOT(PPStartGame()));
    connect(ui->pushButtonPPStop,SIGNAL(clicked()),this,SLOT(PPStopGame()));
    connect(ui->pushButtonShowPingPong,SIGNAL(clicked()),this,SLOT(ShowPP()));
    connect(ui->checkBoxPP01,SIGNAL(clicked(bool)),this,SLOT(clickPP01(bool)));
    connect(ui->checkBoxPP02,SIGNAL(clicked(bool)),this,SLOT(clickPP02(bool)));
    connect(ui->checkBoxPP03,SIGNAL(clicked(bool)),this,SLOT(clickPP03(bool)));
    connect(ui->checkBoxPP04,SIGNAL(clicked(bool)),this,SLOT(clickPP04(bool)));
    connect(ui->checkBoxPP05,SIGNAL(clicked(bool)),this,SLOT(clickPP05(bool)));
    connect(ui->checkBoxPP06,SIGNAL(clicked(bool)),this,SLOT(clickPP06(bool)));
    connect(ui->checkBoxPP07,SIGNAL(clicked(bool)),this,SLOT(clickPP07(bool)));
    connect(ui->checkBoxPP08,SIGNAL(clicked(bool)),this,SLOT(clickPP08(bool)));
    connect(ui->checkBoxPP09,SIGNAL(clicked(bool)),this,SLOT(clickPP09(bool)));
    connect(ui->checkBoxPP10,SIGNAL(clicked(bool)),this,SLOT(clickPP10(bool)));
    connect(ui->checkBoxPP11,SIGNAL(clicked(bool)),this,SLOT(clickPP11(bool)));
    connect(ui->checkBoxPP12,SIGNAL(clicked(bool)),this,SLOT(clickPP12(bool)));
    connect(ui->checkBoxPP13,SIGNAL(clicked(bool)),this,SLOT(clickPP13(bool)));
    connect(ui->checkBoxPP14,SIGNAL(clicked(bool)),this,SLOT(clickPP14(bool)));
    connect(ui->checkBoxPP15,SIGNAL(clicked(bool)),this,SLOT(clickPP15(bool)));
    connect(ui->checkBoxPP16,SIGNAL(clicked(bool)),this,SLOT(clickPP16(bool)));
    connect(ui->checkBoxPP17,SIGNAL(clicked(bool)),this,SLOT(clickPP17(bool)));
    connect(ui->checkBoxPP18,SIGNAL(clicked(bool)),this,SLOT(clickPP18(bool)));
    connect(ui->checkBoxPP19,SIGNAL(clicked(bool)),this,SLOT(clickPP19(bool)));
    connect(ui->checkBoxPP20,SIGNAL(clicked(bool)),this,SLOT(clickPP20(bool)));
    connect(ui->checkBoxPP21,SIGNAL(clicked(bool)),this,SLOT(clickPP21(bool)));
    connect(ui->checkBoxPP22,SIGNAL(clicked(bool)),this,SLOT(clickPP22(bool)));
    connect(ui->checkBoxPP23,SIGNAL(clicked(bool)),this,SLOT(clickPP23(bool)));
    connect(ui->checkBoxPP24,SIGNAL(clicked(bool)),this,SLOT(clickPP24(bool)));
    connect(ui->checkBoxPP25,SIGNAL(clicked(bool)),this,SLOT(clickPP25(bool)));
    connect(ui->checkBoxPP26,SIGNAL(clicked(bool)),this,SLOT(clickPP26(bool)));
    connect(ui->checkBoxPP27,SIGNAL(clicked(bool)),this,SLOT(clickPP27(bool)));
    connect(ui->checkBoxPP28,SIGNAL(clicked(bool)),this,SLOT(clickPP28(bool)));
    connect(ui->checkBoxPP29,SIGNAL(clicked(bool)),this,SLOT(clickPP29(bool)));
    connect(ui->checkBoxPP30,SIGNAL(clicked(bool)),this,SLOT(clickPP30(bool)));
    connect(ui->checkBoxPP31,SIGNAL(clicked(bool)),this,SLOT(clickPP31(bool)));
    connect(ui->checkBoxPP32,SIGNAL(clicked(bool)),this,SLOT(clickPP32(bool)));
    connect(ui->checkBoxPP33,SIGNAL(clicked(bool)),this,SLOT(clickPP33(bool)));
    connect(ui->checkBoxPP34,SIGNAL(clicked(bool)),this,SLOT(clickPP34(bool)));
    connect(ui->checkBoxPP35,SIGNAL(clicked(bool)),this,SLOT(clickPP35(bool)));
    connect(ui->checkBoxPP36,SIGNAL(clicked(bool)),this,SLOT(clickPP36(bool)));
    connect(ui->pushButtonShowStones,SIGNAL(clicked()),this,SLOT(showStones()));
    ui->tabWidget->setCurrentIndex(0);
    m_PPAnswers.push_back(ui->checkBoxPP01);
    m_PPAnswers.push_back(ui->checkBoxPP02);
    m_PPAnswers.push_back(ui->checkBoxPP03);
    m_PPAnswers.push_back(ui->checkBoxPP04);
    m_PPAnswers.push_back(ui->checkBoxPP05);
    m_PPAnswers.push_back(ui->checkBoxPP06);
    m_PPAnswers.push_back(ui->checkBoxPP07);
    m_PPAnswers.push_back(ui->checkBoxPP08);
    m_PPAnswers.push_back(ui->checkBoxPP09);
    m_PPAnswers.push_back(ui->checkBoxPP10);
    m_PPAnswers.push_back(ui->checkBoxPP11);
    m_PPAnswers.push_back(ui->checkBoxPP12);
    m_PPAnswers.push_back(ui->checkBoxPP13);
    m_PPAnswers.push_back(ui->checkBoxPP14);
    m_PPAnswers.push_back(ui->checkBoxPP15);
    m_PPAnswers.push_back(ui->checkBoxPP16);
    m_PPAnswers.push_back(ui->checkBoxPP17);
    m_PPAnswers.push_back(ui->checkBoxPP18);
    m_PPAnswers.push_back(ui->checkBoxPP19);
    m_PPAnswers.push_back(ui->checkBoxPP20);
    m_PPAnswers.push_back(ui->checkBoxPP21);
    m_PPAnswers.push_back(ui->checkBoxPP22);
    m_PPAnswers.push_back(ui->checkBoxPP23);
    m_PPAnswers.push_back(ui->checkBoxPP24);
    m_PPAnswers.push_back(ui->checkBoxPP25);
    m_PPAnswers.push_back(ui->checkBoxPP26);
    m_PPAnswers.push_back(ui->checkBoxPP27);
    m_PPAnswers.push_back(ui->checkBoxPP28);
    m_PPAnswers.push_back(ui->checkBoxPP29);
    m_PPAnswers.push_back(ui->checkBoxPP30);
    m_PPAnswers.push_back(ui->checkBoxPP31);
    m_PPAnswers.push_back(ui->checkBoxPP32);
    m_PPAnswers.push_back(ui->checkBoxPP33);
    m_PPAnswers.push_back(ui->checkBoxPP34);
    m_PPAnswers.push_back(ui->checkBoxPP35);
    m_PPAnswers.push_back(ui->checkBoxPP36);
    for (int i=0; i!= m_PPAnswers.size(); i++)
    {
        m_PPAnswers[i]->setText("Empty");
        m_PPAnswers[i]->setDisabled(true);
    }
    PPGame *game = new PPGame;
    game->Name = "- Empty -";
    m_PPGames.push_back(game);
    game = new PPGame;
    game->Name = "Demo: Deutsche Bundesländer";
    game->Answers.push_back("Baden-Württemberg");
    game->Answers.push_back("Bayern");
    game->Answers.push_back("Berlin");
    game->Answers.push_back("Brandenburg");
    game->Answers.push_back("Bremen");
    game->Answers.push_back("Hamburg");
    game->Answers.push_back("Hessen");
    game->Answers.push_back("Mecklenburg-Vorpommern");
    game->Answers.push_back("Niedersachsen");
    game->Answers.push_back("Nordrhein-Westfalen");
    game->Answers.push_back("Rheinland-Pfalz");
    game->Answers.push_back("Saarland");
    game->Answers.push_back("Sachsen");
    game->Answers.push_back("Sachsen-Anhalt");
    game->Answers.push_back("Schleswig-Holstein");
    game->Answers.push_back("Thüringen");
    m_PPGames.push_back(game);
    game = new PPGame;
    game->Name = "Demo: Zahlen von 1 bis 36";
    //QString temp;
    for (int i = 1; i!=37; i++)
    {
        //temp.setNum(i);
        game->Answers.push_back(QString().setNum(i));
    }
    m_PPGames.push_back(game);
    //Hier geht es los
    game = new PPGame;
    game->Name = "Beliebteste Automarken in Deutschland";
    game->Answers.push_back("Volkswagen");
    game->Answers.push_back("Mercedes");
    game->Answers.push_back("BMW, Mini");
    game->Answers.push_back("Opel");
    game->Answers.push_back("Audi");
    game->Answers.push_back("Ford");
    game->Answers.push_back("Renault, Dacia");
    game->Answers.push_back("Skoda");
    game->Answers.push_back("Toyota, Lexus");
    game->Answers.push_back("Peugeot");
    game->Answers.push_back("Fiat");
    game->Answers.push_back("Citroen");
    game->Answers.push_back("Mazda");
    game->Answers.push_back("Hyundai");
    game->Answers.push_back("Seat");
    game->Answers.push_back("Nissan");
    game->Answers.push_back("Honda");
    game->Answers.push_back("Suzuki");
    game->Answers.push_back("Kia");
    game->Answers.push_back("Smart");
    game->Answers.push_back("Volvo");
    game->Answers.push_back("Mitsubishi");
    game->Answers.push_back("Chevrolet");
    game->Answers.push_back("Porsche");
    game->Answers.push_back("Chrysler, Jeep, Dodgs");
    game->Answers.push_back("Daihatsu");
    game->Answers.push_back("Subaru");
    game->Answers.push_back("Alfa Romeo");
    game->Answers.push_back("Land Rover");
    game->Answers.push_back("Jaguar");
    game->Answers.push_back("Saab");
    game->Answers.push_back("Lancia");
    game->Answers.push_back("General Motors");
    game->Answers.push_back("Lada");
    game->Answers.push_back("Ssangyong");
    m_PPGames.push_back(game);
    //Hier ist es fertig
    game = new PPGame;
    game->Name = "12 Jünger Jesu";
    game->Answers.push_back("Andreas");
    game->Answers.push_back("Bartholomäus");
    game->Answers.push_back("Jakobus der Älteste (Zebedäi)");
    game->Answers.push_back("Jakobus der Jüngste (Alphäi)");
    game->Answers.push_back("Johannes, Sohn des Zebedäus");
    game->Answers.push_back("Judas Ischariot");
    game->Answers.push_back("Matthäus");
    game->Answers.push_back("Petrus");
    game->Answers.push_back("Philippus");
    game->Answers.push_back("Simon");
    game->Answers.push_back("Thaddäus");
    game->Answers.push_back("Thomas");
    m_PPGames.push_back(game);
    game = new PPGame;
    game->Name = "Im Neuen Testament genannte Schreiber der Schriften des Neuen Testament";
    game->Answers.push_back("Matthäus");
    game->Answers.push_back("Markus");
    game->Answers.push_back("Lukas");
    game->Answers.push_back("Paulus");
    game->Answers.push_back("Jakobus");
    game->Answers.push_back("Petrus");
    game->Answers.push_back("Judas");
    game->Answers.push_back("Johannes");
    m_PPGames.push_back(game);
    game = new PPGame;
    game->Name = "Teilnehmer FIFA WM 2010";
    game->Answers.push_back("Algerien");
    game->Answers.push_back("Argentinien");
    game->Answers.push_back("Australien");
    game->Answers.push_back("Brasilien");
    game->Answers.push_back("Chile");
    game->Answers.push_back("Dänemark");
    game->Answers.push_back("Deutschland");
    game->Answers.push_back("Elfenbeinküste");
    game->Answers.push_back("England");
    game->Answers.push_back("Frankreich");
    game->Answers.push_back("Ghana");
    game->Answers.push_back("Griechenland");
    game->Answers.push_back("Honduras");
    game->Answers.push_back("Italien");
    game->Answers.push_back("Japan");
    game->Answers.push_back("Kamerun");
    game->Answers.push_back("Mexiko");
    game->Answers.push_back("Neuseeland");
    game->Answers.push_back("Niederlande");
    game->Answers.push_back("Nigeria");
    game->Answers.push_back("Nordkorea");
    game->Answers.push_back("Paraguay");
    game->Answers.push_back("Portugal");
    game->Answers.push_back("Schweiz");
    game->Answers.push_back("Serbien");
    game->Answers.push_back("Slowakei");
    game->Answers.push_back("Slowenien");
    game->Answers.push_back("Spanien");
    game->Answers.push_back("Südafrika");
    game->Answers.push_back("Südkorea");
    game->Answers.push_back("Uruguay");
    game->Answers.push_back("USA");
    m_PPGames.push_back(game);
    game = new PPGame;
    game->Name = "Filme mit Will Smith";
    game->Answers.push_back("1992: Straßenkinder");
    game->Answers.push_back("1993: Made in Amerika");
    game->Answers.push_back("1993: Das Leben - Ein Sechserpack");
    game->Answers.push_back("1995: Bad Boys - Harte Jungs");
    game->Answers.push_back("1996: Independense Day");
    game->Answers.push_back("1997: Men in Black");
    game->Answers.push_back("1998: Der Staatsfeind Nr. 1");
    game->Answers.push_back("1999: Wild Wild West");
    game->Answers.push_back("2000: Die Legende von Bagger Vance");
    game->Answers.push_back("2001: Ali");
    game->Answers.push_back("2002: Men in Black II");
    game->Answers.push_back("2003:: Bad Boys II");
    game->Answers.push_back("2004: I, Robot");
    game->Answers.push_back("2004: Jersey Girl");
    game->Answers.push_back("2005: Hitch - Der Date Doktor");
    game->Answers.push_back("2006: Das Streben nach Glück");
    game->Answers.push_back("2007: I am Legend");
    game->Answers.push_back("2008: Hancock");
    game->Answers.push_back("2008: Sieben Leben");
    m_PPGames.push_back(game);
    for (int i=0; i!=m_PPGames.size(); i++)
    {
        ui->comboBoxPPGames->addItem(m_PPGames[i]->Name);
    }
}

Controller::~Controller()
{
    delete ui;
}

void Controller::PPPrepareGame()
{
    for (int i=0; i!= m_PPAnswers.size(); i++)
    {
        m_PPAnswers[i]->setChecked(false);
    }
    if (ui->comboBoxPPGames->currentIndex() != 0)
    {
        ui->pushButtonPPPrepare->setDisabled(true);
        ui->pushButtonPPStart->setEnabled(true);
        ui->comboBoxPPGames->setDisabled(true);
    }
    QByteArray datagram;
    QDataStream out(&datagram, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_6);
    QString type;
    type = "PPPrepare";
    QString gameName;
    gameName = ui->comboBoxPPGames->currentText();
    out << type << gameName;
    QHostAddress receiver(ui->lineEditIp->text());
    ui->labelStatusIp->setText(receiver.toString());
    //if (receiver.isIPv4Address())
    {
        int port = ui->lineEditPort->text().toInt();
        if (port != 0)
        {
            QString portStr;
            portStr.setNum(port);
            ui->labelStatusIp->setText(ui->labelStatusIp->text().append(":").append(portStr));
            socket.writeDatagram(datagram,receiver,port);
        }
    }
}

void Controller::PPStartGame()
{
    for (int i=0; i!= m_PPGames[ui->comboBoxPPGames->currentIndex()]->Answers.size(); i++)
    {
        m_PPAnswers[i]->setEnabled(true);
    }
    ui->pushButtonPPStart->setDisabled(true);
    ui->pushButtonPPStop->setEnabled(true);
    QByteArray datagram;
    QDataStream out(&datagram, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_6);
    QString type;
    type = "PPStart";
    int numAnswer;
    numAnswer = m_PPGames[ui->comboBoxPPGames->currentIndex()]->Answers.size();
    out << type << numAnswer;
    QHostAddress receiver(ui->lineEditIp->text());
    ui->labelStatusIp->setText(receiver.toString());
    //if (receiver.isIPv4Address())
    {
        int port = ui->lineEditPort->text().toInt();
        if (port != 0)
        {
            QString portStr;
            portStr.setNum(port);
            ui->labelStatusIp->setText(ui->labelStatusIp->text().append(":").append(portStr));
            socket.writeDatagram(datagram,receiver,port);
        }
    }
}

void Controller::PPStopGame()
{
    for (int i=0; i!= m_PPGames[ui->comboBoxPPGames->currentIndex()]->Answers.size(); i++)
    {
        m_PPAnswers[i]->setDisabled(true);
    }
    ui->pushButtonPPStop->setDisabled(true);
    ui->pushButtonPPPrepare->setEnabled(true);
    ui->comboBoxPPGames->setEnabled(true);
    QByteArray datagram;
    QDataStream out(&datagram, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_6);
    QString type;
    type = "PPStop";
    out << type;
    QHostAddress receiver(ui->lineEditIp->text());
    ui->labelStatusIp->setText(receiver.toString());
    //if (receiver.isIPv4Address())
    {
        int port = ui->lineEditPort->text().toInt();
        if (port != 0)
        {
            QString portStr;
            portStr.setNum(port);
            ui->labelStatusIp->setText(ui->labelStatusIp->text().append(":").append(portStr));
            socket.writeDatagram(datagram,receiver,port);
        }
    }
}

void Controller::DisplayPPGameLocal(int gameNum)
{
    for (int i=0; i!= m_PPAnswers.size(); i++)
    {
        m_PPAnswers[i]->setText("Empty");
        m_PPAnswers[i]->setDisabled(true);
        m_PPAnswers[i]->setChecked(false);
    }
    for (int i=0; i!= m_PPGames[gameNum]->Answers.size(); i++)
    {
        m_PPAnswers[i]->setText(m_PPGames[gameNum]->Answers[i]);
        //m_PPAnswers[i]->setEnabled(true);
    }
}

/*void Controller::test()
{
    HWND handle;
    handle = FindWindow(NULL,L"Unbenannt - Editor");
    if(handle){SetForegroundWindow(handle);}
}*/

void Controller::switchBack()
{
    QByteArray datagram;
    QDataStream out(&datagram, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_6);
    QString type,window;
    type = "SwitchWindow";
    window = "View";
    out << type << window;
    QHostAddress receiver(ui->lineEditIp->text());
    ui->labelStatusIp->setText(receiver.toString());
    //if (receiver.isIPv4Address())
    {
        int port = ui->lineEditPort->text().toInt();
        if (port != 0)
        {
            QString portStr;
            portStr.setNum(port);
            ui->labelStatusIp->setText(ui->labelStatusIp->text().append(":").append(portStr));
            socket.writeDatagram(datagram,receiver,port);
        }
    }
}

void Controller::switchStream1()
{
    QByteArray datagram;
    QDataStream out(&datagram, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_6);
    QString type,window;
    type = "SwitchWindow";
    window = "Stream";
    out << type << window;
    QHostAddress receiver(ui->lineEditIp->text());
    ui->labelStatusIp->setText(receiver.toString());
    //if (receiver.isIPv4Address())
    {
        int port = ui->lineEditPort->text().toInt();
        if (port != 0)
        {
            QString portStr;
            portStr.setNum(port);
            ui->labelStatusIp->setText(ui->labelStatusIp->text().append(":").append(portStr));
            socket.writeDatagram(datagram,receiver,port);
        }
    }
}

void Controller::switchCamera()
{
    QByteArray datagram;
    QDataStream out(&datagram, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_6);
    QString type,window;
    type = "SwitchWindow";
    window = "Camera";
    out << type << window;
    QHostAddress receiver(ui->lineEditIp->text());
    ui->labelStatusIp->setText(receiver.toString());
    //if (receiver.isIPv4Address())
    {
        int port = ui->lineEditPort->text().toInt();
        if (port != 0)
        {
            QString portStr;
            portStr.setNum(port);
            ui->labelStatusIp->setText(ui->labelStatusIp->text().append(":").append(portStr));
            socket.writeDatagram(datagram,receiver,port);
        }
    }
}

void Controller::ping()
{
    QByteArray datagram;
    QDataStream out(&datagram, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_6);
    QString type;
    type = "Ping";
    out << type;
    QHostAddress receiver(ui->lineEditIp->text());
    ui->labelStatusIp->setText(receiver.toString());
    //if (receiver.isIPv4Address())
    {
        int port = ui->lineEditPort->text().toInt();
        if (port != 0)
        {
            QString portStr;
            portStr.setNum(port);
            ui->labelStatusIp->setText(ui->labelStatusIp->text().append(":").append(portStr));
            socket.writeDatagram(datagram,receiver,port);
        }
    }
}

void Controller::showCustomMessage()
{
    QByteArray datagram;
    QDataStream out(&datagram, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_6);
    QString type,msgStr;
    type = "Message";
    msgStr = ui->lineEditCustomMessage->text();
    out << type << msgStr;
    QHostAddress receiver(ui->lineEditIp->text());
    ui->labelStatusIp->setText(receiver.toString());
    //if (receiver.isIPv4Address())
    {
        int port = ui->lineEditPort->text().toInt();
        if (port != 0)
        {
            QString portStr;
            portStr.setNum(port);
            ui->labelStatusIp->setText(ui->labelStatusIp->text().append(":").append(portStr));
            socket.writeDatagram(datagram,receiver,port);
        }
    }
}

void Controller::showGameName()
{
    QByteArray datagram;
    QDataStream out(&datagram, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_6);
    QString type,msgStr;
    type = "Message";
    msgStr = ui->comboBoxGameName->currentText();
    out << type << msgStr;
    QHostAddress receiver(ui->lineEditIp->text());
    ui->labelStatusIp->setText(receiver.toString());
    //if (receiver.isIPv4Address())
    {
        int port = ui->lineEditPort->text().toInt();
        if (port != 0)
        {
            QString portStr;
            portStr.setNum(port);
            ui->labelStatusIp->setText(ui->labelStatusIp->text().append(":").append(portStr));
            socket.writeDatagram(datagram,receiver,port);
        }
    }
}

void Controller::updateName()
{
    QByteArray datagram;
    QDataStream out(&datagram, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_6);
    QString type,nameA,nameB;
    type = "Update Name";
    nameA = ui->lineEditNameA->text();
    nameB = ui->lineEditNameB->text();
    out << type << nameA << nameB;
    QHostAddress receiver(ui->lineEditIp->text());
    ui->labelStatusIp->setText(receiver.toString());
    //if (receiver.isIPv4Address())
    {
        int port = ui->lineEditPort->text().toInt();
        if (port != 0)
        {
            QString portStr;
            portStr.setNum(port);
            ui->labelStatusIp->setText(ui->labelStatusIp->text().append(":").append(portStr));
            socket.writeDatagram(datagram,receiver,port);
        }
    }
}

void Controller::updateScore()
{
    QByteArray datagram;
    QDataStream out(&datagram, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_6);
    QString type;
    quint32 scoreA,sumA,scoreB,sumB;
    type = "Update Score";
    scoreA = 0;
    if (ui->checkBoxA1->isChecked())
        scoreA++;
    scoreA<<=1;
    if (ui->checkBoxA2->isChecked())
        scoreA++;
    scoreA<<=1;
    if (ui->checkBoxA3->isChecked())
        scoreA++;
    scoreA<<=1;
    if (ui->checkBoxA4->isChecked())
        scoreA++;
    scoreA<<=1;
    if (ui->checkBoxA5->isChecked())
        scoreA++;
    scoreA<<=1;
    if (ui->checkBoxA6->isChecked())
        scoreA++;
    scoreA<<=1;
    if (ui->checkBoxA7->isChecked())
        scoreA++;
    scoreA<<=1;
    if (ui->checkBoxA8->isChecked())
        scoreA++;
    scoreA<<=1;
    if (ui->checkBoxA9->isChecked())
        scoreA++;
    scoreA<<=1;
    if (ui->checkBoxA10->isChecked())
        scoreA++;
    scoreA<<=1;
    if (ui->checkBoxA11->isChecked())
        scoreA++;
    scoreA<<=1;
    if (ui->checkBoxA12->isChecked())
        scoreA++;
    scoreA<<=1;
    if (ui->checkBoxA13->isChecked())
        scoreA++;
    scoreA<<=1;
    if (ui->checkBoxA14->isChecked())
        scoreA++;
    scoreA<<=1;
    if (ui->checkBoxA15->isChecked())
        scoreA++;
    sumA = ui->lcdNumberSumA->value();
    scoreB = 0;
    if (ui->checkBoxB1->isChecked())
        scoreB++;
    scoreB<<=1;
    if (ui->checkBoxB2->isChecked())
        scoreB++;
    scoreB<<=1;
    if (ui->checkBoxB3->isChecked())
        scoreB++;
    scoreB<<=1;
    if (ui->checkBoxB4->isChecked())
        scoreB++;
    scoreB<<=1;
    if (ui->checkBoxB5->isChecked())
        scoreB++;
    scoreB<<=1;
    if (ui->checkBoxB6->isChecked())
        scoreB++;
    scoreB<<=1;
    if (ui->checkBoxB7->isChecked())
        scoreB++;
    scoreB<<=1;
    if (ui->checkBoxB8->isChecked())
        scoreB++;
    scoreB<<=1;
    if (ui->checkBoxB9->isChecked())
        scoreB++;
    scoreB<<=1;
    if (ui->checkBoxB10->isChecked())
        scoreB++;
    scoreB<<=1;
    if (ui->checkBoxB11->isChecked())
        scoreB++;
    scoreB<<=1;
    if (ui->checkBoxB12->isChecked())
        scoreB++;
    scoreB<<=1;
    if (ui->checkBoxB13->isChecked())
        scoreB++;
    scoreB<<=1;
    if (ui->checkBoxB14->isChecked())
        scoreB++;
    scoreB<<=1;
    if (ui->checkBoxB15->isChecked())
        scoreB++;
    sumB = ui->lcdNumberSumB->value();
    //nameA = ui->lineEditNameA->text();
    //nameB = ui->lineEditNameB->text();
    out << type << scoreA << sumA << scoreB << sumB;
    QHostAddress receiver(ui->lineEditIp->text());
    ui->labelStatusIp->setText(receiver.toString());
    //if (receiver.isIPv4Address())
    {
        int port = ui->lineEditPort->text().toInt();
        if (port != 0)
        {
            QString portStr;
            portStr.setNum(port);
            ui->labelStatusIp->setText(ui->labelStatusIp->text().append(":").append(portStr));
            socket.writeDatagram(datagram,receiver,port);
        }
    }
}

void Controller::resetCountdown()
{
    QByteArray datagram;
    QDataStream out(&datagram, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_6);
    QString type;
    int time;
    type = "Reset Countdown";
    time = ui->spinBoxCountdown->value();
    out << type << time;
    QHostAddress receiver(ui->lineEditIp->text());
    ui->labelStatusIp->setText(receiver.toString());
    //if (receiver.isIPv4Address())
    {
        int port = ui->lineEditPort->text().toInt();
        if (port != 0)
        {
            QString portStr;
            portStr.setNum(port);
            ui->labelStatusIp->setText(ui->labelStatusIp->text().append(":").append(portStr));
            socket.writeDatagram(datagram,receiver,port);
        }
    }
}

void Controller::startCountdown()
{
    QByteArray datagram;
    QDataStream out(&datagram, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_6);
    QString type;
    type = "Start Countdown";
    out << type;
    QHostAddress receiver(ui->lineEditIp->text());
    ui->labelStatusIp->setText(receiver.toString());
    //if (receiver.isIPv4Address())
    {
        int port = ui->lineEditPort->text().toInt();
        if (port != 0)
        {
            QString portStr;
            portStr.setNum(port);
            ui->labelStatusIp->setText(ui->labelStatusIp->text().append(":").append(portStr));
            socket.writeDatagram(datagram,receiver,port);
        }
    }
}

void Controller::showConnection()
{
    QByteArray datagram;
    QDataStream out(&datagram, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_6);
    QString type;
    type = "ShowScreen";
    QString screenType;
    screenType = "Connection";
    out << type << screenType;
    QHostAddress receiver(ui->lineEditIp->text());
    ui->labelStatusIp->setText(receiver.toString());
    //if (receiver.isIPv4Address())
    {
        int port = ui->lineEditPort->text().toInt();
        if (port != 0)
        {
            QString portStr;
            portStr.setNum(port);
            ui->labelStatusIp->setText(ui->labelStatusIp->text().append(":").append(portStr));
            socket.writeDatagram(datagram,receiver,port);
        }
    }
}

void Controller::showLogo()
{
    QByteArray datagram;
    QDataStream out(&datagram, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_6);
    QString type;
    type = "ShowScreen";
    QString screenType;
    screenType = "Logo";
    out << type << screenType;
    QHostAddress receiver(ui->lineEditIp->text());
    ui->labelStatusIp->setText(receiver.toString());
    //if (receiver.isIPv4Address())
    {
        int port = ui->lineEditPort->text().toInt();
        if (port != 0)
        {
            QString portStr;
            portStr.setNum(port);
            ui->labelStatusIp->setText(ui->labelStatusIp->text().append(":").append(portStr));
            socket.writeDatagram(datagram,receiver,port);
        }
    }
}

void Controller::showStones()
{
    QByteArray datagram;
    QDataStream out(&datagram, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_6);
    QString type;
    type = "ShowScreen";
    QString screenType;
    screenType = "Stones";
    out << type << screenType;
    QHostAddress receiver(ui->lineEditIp->text());
    ui->labelStatusIp->setText(receiver.toString());
    //if (receiver.isIPv4Address())
    {
        int port = ui->lineEditPort->text().toInt();
        if (port != 0)
        {
            QString portStr;
            portStr.setNum(port);
            ui->labelStatusIp->setText(ui->labelStatusIp->text().append(":").append(portStr));
            socket.writeDatagram(datagram,receiver,port);
        }
    }
}

void Controller::showScore()
{
    QByteArray datagram;
    QDataStream out(&datagram, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_6);
    QString type;
    type = "ShowScreen";
    QString screenType;
    screenType = "Score";
    out << type << screenType;
    QHostAddress receiver(ui->lineEditIp->text());
    ui->labelStatusIp->setText(receiver.toString());
    //if (receiver.isIPv4Address())
    {
        int port = ui->lineEditPort->text().toInt();
        if (port != 0)
        {
            QString portStr;
            portStr.setNum(port);
            ui->labelStatusIp->setText(ui->labelStatusIp->text().append(":").append(portStr));
            socket.writeDatagram(datagram,receiver,port);
        }
    }
}

void Controller::showCountdown()
{
    QByteArray datagram;
    QDataStream out(&datagram, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_6);
    QString type;
    type = "ShowScreen";
    QString screenType;
    screenType = "Countdown";
    out << type << screenType;
    QHostAddress receiver(ui->lineEditIp->text());
    ui->labelStatusIp->setText(receiver.toString());
    //if (receiver.isIPv4Address())
    {
        int port = ui->lineEditPort->text().toInt();
        if (port != 0)
        {
            QString portStr;
            portStr.setNum(port);
            ui->labelStatusIp->setText(ui->labelStatusIp->text().append(":").append(portStr));
            socket.writeDatagram(datagram,receiver,port);
        }
    }
}

void Controller::ShowPP()
{
    QByteArray datagram;
    QDataStream out(&datagram, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_6);
    QString type;
    type = "ShowScreen";
    QString screenType;
    screenType = "PPGame";
    out << type << screenType;
    QHostAddress receiver(ui->lineEditIp->text());
    ui->labelStatusIp->setText(receiver.toString());
    //if (receiver.isIPv4Address())
    {
        int port = ui->lineEditPort->text().toInt();
        if (port != 0)
        {
            QString portStr;
            portStr.setNum(port);
            ui->labelStatusIp->setText(ui->labelStatusIp->text().append(":").append(portStr));
            socket.writeDatagram(datagram,receiver,port);
        }
    }
}

void Controller::riseA1(bool checked)
{
    if (checked)
    {
        ui->lcdNumberSumA->display(ui->lcdNumberSumA->intValue()+1);
    }
    else
    {
        ui->lcdNumberSumA->display(ui->lcdNumberSumA->intValue()-1);
    }
    if (ui->checkBoxUpdateOnClick->isChecked())
    {
        emit updateScore();
    }
}

void Controller::riseA2(bool checked)
{
    if (checked)
    {
        ui->lcdNumberSumA->display(ui->lcdNumberSumA->intValue()+2);
    }
    else
    {
        ui->lcdNumberSumA->display(ui->lcdNumberSumA->intValue()-2);
    }
    if (ui->checkBoxUpdateOnClick->isChecked())
    {
        emit updateScore();
    }
}

void Controller::riseA3(bool checked)
{
    if (checked)
    {
        ui->lcdNumberSumA->display(ui->lcdNumberSumA->intValue()+3);
    }
    else
    {
        ui->lcdNumberSumA->display(ui->lcdNumberSumA->intValue()-3);
    }
    if (ui->checkBoxUpdateOnClick->isChecked())
    {
        emit updateScore();
    }
}

void Controller::riseA4(bool checked)
{
    if (checked)
    {
        ui->lcdNumberSumA->display(ui->lcdNumberSumA->intValue()+4);
    }
    else
    {
        ui->lcdNumberSumA->display(ui->lcdNumberSumA->intValue()-4);
    }
    if (ui->checkBoxUpdateOnClick->isChecked())
    {
        emit updateScore();
    }
}

void Controller::riseA5(bool checked)
{
    if (checked)
    {
        ui->lcdNumberSumA->display(ui->lcdNumberSumA->intValue()+5);
    }
    else
    {
        ui->lcdNumberSumA->display(ui->lcdNumberSumA->intValue()-5);
    }
    if (ui->checkBoxUpdateOnClick->isChecked())
    {
        emit updateScore();
    }
}

void Controller::riseA6(bool checked)
{
    if (checked)
    {
        ui->lcdNumberSumA->display(ui->lcdNumberSumA->intValue()+6);
    }
    else
    {
        ui->lcdNumberSumA->display(ui->lcdNumberSumA->intValue()-6);
    }
    if (ui->checkBoxUpdateOnClick->isChecked())
    {
        emit updateScore();
    }
}

void Controller::riseA7(bool checked)
{
    if (checked)
    {
        ui->lcdNumberSumA->display(ui->lcdNumberSumA->intValue()+7);
    }
    else
    {
        ui->lcdNumberSumA->display(ui->lcdNumberSumA->intValue()-7);
    }
    if (ui->checkBoxUpdateOnClick->isChecked())
    {
        emit updateScore();
    }
}

void Controller::riseA8(bool checked)
{
    if (checked)
    {
        ui->lcdNumberSumA->display(ui->lcdNumberSumA->intValue()+8);
    }
    else
    {
        ui->lcdNumberSumA->display(ui->lcdNumberSumA->intValue()-8);
    }
    if (ui->checkBoxUpdateOnClick->isChecked())
    {
        emit updateScore();
    }
}

void Controller::riseA9(bool checked)
{
    if (checked)
    {
        ui->lcdNumberSumA->display(ui->lcdNumberSumA->intValue()+9);
    }
    else
    {
        ui->lcdNumberSumA->display(ui->lcdNumberSumA->intValue()-9);
    }
    if (ui->checkBoxUpdateOnClick->isChecked())
    {
        emit updateScore();
    }
}

void Controller::riseA10(bool checked)
{
    if (checked)
    {
        ui->lcdNumberSumA->display(ui->lcdNumberSumA->intValue()+10);
    }
    else
    {
        ui->lcdNumberSumA->display(ui->lcdNumberSumA->intValue()-10);
    }
    if (ui->checkBoxUpdateOnClick->isChecked())
    {
        emit updateScore();
    }
}

void Controller::riseA11(bool checked)
{
    if (checked)
    {
        ui->lcdNumberSumA->display(ui->lcdNumberSumA->intValue()+11);
    }
    else
    {
        ui->lcdNumberSumA->display(ui->lcdNumberSumA->intValue()-11);
    }
    if (ui->checkBoxUpdateOnClick->isChecked())
    {
        emit updateScore();
    }
}

void Controller::riseA12(bool checked)
{
    if (checked)
    {
        ui->lcdNumberSumA->display(ui->lcdNumberSumA->intValue()+12);
    }
    else
    {
        ui->lcdNumberSumA->display(ui->lcdNumberSumA->intValue()-12);
    }
    if (ui->checkBoxUpdateOnClick->isChecked())
    {
        emit updateScore();
    }
}

void Controller::riseA13(bool checked)
{
    if (checked)
    {
        ui->lcdNumberSumA->display(ui->lcdNumberSumA->intValue()+13);
    }
    else
    {
        ui->lcdNumberSumA->display(ui->lcdNumberSumA->intValue()-13);
    }
    if (ui->checkBoxUpdateOnClick->isChecked())
    {
        emit updateScore();
    }
}

void Controller::riseA14(bool checked)
{
    if (checked)
    {
        ui->lcdNumberSumA->display(ui->lcdNumberSumA->intValue()+14);
    }
    else
    {
        ui->lcdNumberSumA->display(ui->lcdNumberSumA->intValue()-14);
    }
    if (ui->checkBoxUpdateOnClick->isChecked())
    {
        emit updateScore();
    }
}

void Controller::riseA15(bool checked)
{
    if (checked)
    {
        ui->lcdNumberSumA->display(ui->lcdNumberSumA->intValue()+15);
    }
    else
    {
        ui->lcdNumberSumA->display(ui->lcdNumberSumA->intValue()-15);
    }
    if (ui->checkBoxUpdateOnClick->isChecked())
    {
        emit updateScore();
    }
}

void Controller::riseB1(bool checked)
{
    if (checked)
    {
        ui->lcdNumberSumB->display(ui->lcdNumberSumB->intValue()+1);
    }
    else
    {
        ui->lcdNumberSumB->display(ui->lcdNumberSumB->intValue()-1);
    }
    if (ui->checkBoxUpdateOnClick->isChecked())
    {
        emit updateScore();
    }
}

void Controller::riseB2(bool checked)
{
    if (checked)
    {
        ui->lcdNumberSumB->display(ui->lcdNumberSumB->intValue()+2);
    }
    else
    {
        ui->lcdNumberSumB->display(ui->lcdNumberSumB->intValue()-2);
    }
    if (ui->checkBoxUpdateOnClick->isChecked())
    {
        emit updateScore();
    }
}

void Controller::riseB3(bool checked)
{
    if (checked)
    {
        ui->lcdNumberSumB->display(ui->lcdNumberSumB->intValue()+3);
    }
    else
    {
        ui->lcdNumberSumB->display(ui->lcdNumberSumB->intValue()-3);
    }
    if (ui->checkBoxUpdateOnClick->isChecked())
    {
        emit updateScore();
    }
}

void Controller::riseB4(bool checked)
{
    if (checked)
    {
        ui->lcdNumberSumB->display(ui->lcdNumberSumB->intValue()+4);
    }
    else
    {
        ui->lcdNumberSumB->display(ui->lcdNumberSumB->intValue()-4);
    }
    if (ui->checkBoxUpdateOnClick->isChecked())
    {
        emit updateScore();
    }
}

void Controller::riseB5(bool checked)
{
    if (checked)
    {
        ui->lcdNumberSumB->display(ui->lcdNumberSumB->intValue()+5);
    }
    else
    {
        ui->lcdNumberSumB->display(ui->lcdNumberSumB->intValue()-5);
    }
    if (ui->checkBoxUpdateOnClick->isChecked())
    {
        emit updateScore();
    }
}

void Controller::riseB6(bool checked)
{
    if (checked)
    {
        ui->lcdNumberSumB->display(ui->lcdNumberSumB->intValue()+6);
    }
    else
    {
        ui->lcdNumberSumB->display(ui->lcdNumberSumB->intValue()-6);
    }
    if (ui->checkBoxUpdateOnClick->isChecked())
    {
        emit updateScore();
    }
}

void Controller::riseB7(bool checked)
{
    if (checked)
    {
        ui->lcdNumberSumB->display(ui->lcdNumberSumB->intValue()+7);
    }
    else
    {
        ui->lcdNumberSumB->display(ui->lcdNumberSumB->intValue()-7);
    }
    if (ui->checkBoxUpdateOnClick->isChecked())
    {
        emit updateScore();
    }
}

void Controller::riseB8(bool checked)
{
    if (checked)
    {
        ui->lcdNumberSumB->display(ui->lcdNumberSumB->intValue()+8);
    }
    else
    {
        ui->lcdNumberSumB->display(ui->lcdNumberSumB->intValue()-8);
    }
    if (ui->checkBoxUpdateOnClick->isChecked())
    {
        emit updateScore();
    }
}

void Controller::riseB9(bool checked)
{
    if (checked)
    {
        ui->lcdNumberSumB->display(ui->lcdNumberSumB->intValue()+9);
    }
    else
    {
        ui->lcdNumberSumB->display(ui->lcdNumberSumB->intValue()-9);
    }
    if (ui->checkBoxUpdateOnClick->isChecked())
    {
        emit updateScore();
    }
}

void Controller::riseB10(bool checked)
{
    if (checked)
    {
        ui->lcdNumberSumB->display(ui->lcdNumberSumB->intValue()+10);
    }
    else
    {
        ui->lcdNumberSumB->display(ui->lcdNumberSumB->intValue()-10);
    }
    if (ui->checkBoxUpdateOnClick->isChecked())
    {
        emit updateScore();
    }
}

void Controller::riseB11(bool checked)
{
    if (checked)
    {
        ui->lcdNumberSumB->display(ui->lcdNumberSumB->intValue()+11);
    }
    else
    {
        ui->lcdNumberSumB->display(ui->lcdNumberSumB->intValue()-11);
    }
    if (ui->checkBoxUpdateOnClick->isChecked())
    {
        emit updateScore();
    }
}

void Controller::riseB12(bool checked)
{
    if (checked)
    {
        ui->lcdNumberSumB->display(ui->lcdNumberSumB->intValue()+12);
    }
    else
    {
        ui->lcdNumberSumB->display(ui->lcdNumberSumB->intValue()-12);
    }
    if (ui->checkBoxUpdateOnClick->isChecked())
    {
        emit updateScore();
    }
}

void Controller::riseB13(bool checked)
{
    if (checked)
    {
        ui->lcdNumberSumB->display(ui->lcdNumberSumB->intValue()+13);
    }
    else
    {
        ui->lcdNumberSumB->display(ui->lcdNumberSumB->intValue()-13);
    }
    if (ui->checkBoxUpdateOnClick->isChecked())
    {
        emit updateScore();
    }
}

void Controller::riseB14(bool checked)
{
    if (checked)
    {
        ui->lcdNumberSumB->display(ui->lcdNumberSumB->intValue()+14);
    }
    else
    {
        ui->lcdNumberSumB->display(ui->lcdNumberSumB->intValue()-14);
    }
    if (ui->checkBoxUpdateOnClick->isChecked())
    {
        emit updateScore();
    }
}

void Controller::riseB15(bool checked)
{
    if (checked)
    {
        ui->lcdNumberSumB->display(ui->lcdNumberSumB->intValue()+15);
    }
    else
    {
        ui->lcdNumberSumB->display(ui->lcdNumberSumB->intValue()-15);
    }
    if (ui->checkBoxUpdateOnClick->isChecked())
    {
        emit updateScore();
    }
}

void Controller::resetScore()
{
    ui->checkBoxA1->setChecked(false);
    ui->checkBoxA2->setChecked(false);
    ui->checkBoxA3->setChecked(false);
    ui->checkBoxA4->setChecked(false);
    ui->checkBoxA5->setChecked(false);
    ui->checkBoxA6->setChecked(false);
    ui->checkBoxA7->setChecked(false);
    ui->checkBoxA8->setChecked(false);
    ui->checkBoxA9->setChecked(false);
    ui->checkBoxA10->setChecked(false);
    ui->checkBoxA11->setChecked(false);
    ui->checkBoxA12->setChecked(false);
    ui->checkBoxA13->setChecked(false);
    ui->checkBoxA14->setChecked(false);
    ui->checkBoxA15->setChecked(false);
    ui->checkBoxB1->setChecked(false);
    ui->checkBoxB2->setChecked(false);
    ui->checkBoxB3->setChecked(false);
    ui->checkBoxB4->setChecked(false);
    ui->checkBoxB5->setChecked(false);
    ui->checkBoxB6->setChecked(false);
    ui->checkBoxB7->setChecked(false);
    ui->checkBoxB8->setChecked(false);
    ui->checkBoxB9->setChecked(false);
    ui->checkBoxB10->setChecked(false);
    ui->checkBoxB11->setChecked(false);
    ui->checkBoxB12->setChecked(false);
    ui->checkBoxB13->setChecked(false);
    ui->checkBoxB14->setChecked(false);
    ui->checkBoxB15->setChecked(false);
    ui->checkBoxA1->setDisabled(false);
    ui->checkBoxA2->setDisabled(false);
    ui->checkBoxA3->setDisabled(false);
    ui->checkBoxA4->setDisabled(false);
    ui->checkBoxA5->setDisabled(false);
    ui->checkBoxA6->setDisabled(false);
    ui->checkBoxA7->setDisabled(false);
    ui->checkBoxA8->setDisabled(false);
    ui->checkBoxA9->setDisabled(false);
    ui->checkBoxA10->setDisabled(false);
    ui->checkBoxA11->setDisabled(false);
    ui->checkBoxA12->setDisabled(false);
    ui->checkBoxA13->setDisabled(false);
    ui->checkBoxA14->setDisabled(false);
    ui->checkBoxA15->setDisabled(false);
    ui->checkBoxB1->setDisabled(false);
    ui->checkBoxB2->setDisabled(false);
    ui->checkBoxB3->setDisabled(false);
    ui->checkBoxB4->setDisabled(false);
    ui->checkBoxB5->setDisabled(false);
    ui->checkBoxB6->setDisabled(false);
    ui->checkBoxB7->setDisabled(false);
    ui->checkBoxB8->setDisabled(false);
    ui->checkBoxB9->setDisabled(false);
    ui->checkBoxB10->setDisabled(false);
    ui->checkBoxB11->setDisabled(false);
    ui->checkBoxB12->setDisabled(false);
    ui->checkBoxB13->setDisabled(false);
    ui->checkBoxB14->setDisabled(false);
    ui->checkBoxB15->setDisabled(false);
    ui->lcdNumberSumA->display(0);
    ui->lcdNumberSumB->display(0);
    if (ui->checkBoxUpdateOnClick->isChecked())
        emit updateScore();
}

void Controller::clickPP(int num, bool status)
{
    QByteArray datagram;
    QDataStream out(&datagram, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_6);
    QString type;
    type = "PPClick";
    QString answer;
    answer = m_PPAnswers[num]->text();
    out << type << num << status << answer;
    QHostAddress receiver(ui->lineEditIp->text());
    ui->labelStatusIp->setText(receiver.toString());
    //if (receiver.isIPv4Address())
    {
        int port = ui->lineEditPort->text().toInt();
        if (port != 0)
        {
            QString portStr;
            portStr.setNum(port);
            ui->labelStatusIp->setText(ui->labelStatusIp->text().append(":").append(portStr));
            socket.writeDatagram(datagram,receiver,port);
        }
    }
}

void Controller::clickPP01(bool status)
{
    clickPP(0,status);
}

void Controller::clickPP02(bool status)
{
    clickPP(1,status);
}

void Controller::clickPP03(bool status)
{
    clickPP(2,status);
}

void Controller::clickPP04(bool status)
{
    clickPP(3,status);
}

void Controller::clickPP05(bool status)
{
    clickPP(4,status);
}

void Controller::clickPP06(bool status)
{
    clickPP(5,status);
}

void Controller::clickPP07(bool status)
{
    clickPP(6,status);
}

void Controller::clickPP08(bool status)
{
    clickPP(7,status);
}

void Controller::clickPP09(bool status)
{
    clickPP(8,status);
}

void Controller::clickPP10(bool status)
{
    clickPP(9,status);
}

void Controller::clickPP11(bool status)
{
    clickPP(10,status);
}

void Controller::clickPP12(bool status)
{
    clickPP(11,status);
}

void Controller::clickPP13(bool status)
{
    clickPP(12,status);
}

void Controller::clickPP14(bool status)
{
    clickPP(13,status);
}

void Controller::clickPP15(bool status)
{
    clickPP(14,status);
}

void Controller::clickPP16(bool status)
{
    clickPP(15,status);
}

void Controller::clickPP17(bool status)
{
    clickPP(16,status);
}

void Controller::clickPP18(bool status)
{
    clickPP(17,status);
}

void Controller::clickPP19(bool status)
{
    clickPP(18,status);
}

void Controller::clickPP20(bool status)
{
    clickPP(19,status);
}

void Controller::clickPP21(bool status)
{
    clickPP(20,status);
}

void Controller::clickPP22(bool status)
{
    clickPP(21,status);
}

void Controller::clickPP23(bool status)
{
    clickPP(22,status);
}

void Controller::clickPP24(bool status)
{
    clickPP(23,status);
}

void Controller::clickPP25(bool status)
{
    clickPP(24,status);
}

void Controller::clickPP26(bool status)
{
    clickPP(25,status);
}

void Controller::clickPP27(bool status)
{
    clickPP(26,status);
}

void Controller::clickPP28(bool status)
{
    clickPP(27,status);
}

void Controller::clickPP29(bool status)
{
    clickPP(28,status);
}

void Controller::clickPP30(bool status)
{
    clickPP(29,status);
}

void Controller::clickPP31(bool status)
{
    clickPP(30,status);
}


void Controller::clickPP32(bool status)
{
    clickPP(31,status);
}

void Controller::clickPP33(bool status)
{
    clickPP(32,status);
}

void Controller::clickPP34(bool status)
{
    clickPP(33,status);
}

void Controller::clickPP35(bool status)
{
    clickPP(34,status);
}

void Controller::clickPP36(bool status)
{
    clickPP(35,status);
}
