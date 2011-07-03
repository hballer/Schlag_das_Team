#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QMainWindow>
#include <QUdpSocket>
#include <QCheckBox>
#include <windows.h>


namespace Ui {
    class Controller;
}

class Controller : public QMainWindow
{
    Q_OBJECT

public:
    explicit Controller(QWidget *parent = 0);
    ~Controller();

public slots:
    void riseA1(bool);
    void riseA2(bool);
    void riseA3(bool);
    void riseA4(bool);
    void riseA5(bool);
    void riseA6(bool);
    void riseA7(bool);
    void riseA8(bool);
    void riseA9(bool);
    void riseA10(bool);
    void riseA11(bool);
    void riseA12(bool);
    void riseA13(bool);
    void riseA14(bool);
    void riseA15(bool);
    void riseB1(bool);
    void riseB2(bool);
    void riseB3(bool);
    void riseB4(bool);
    void riseB5(bool);
    void riseB6(bool);
    void riseB7(bool);
    void riseB8(bool);
    void riseB9(bool);
    void riseB10(bool);
    void riseB11(bool);
    void riseB12(bool);
    void riseB13(bool);
    void riseB14(bool);
    void riseB15(bool);
    void ping();
    void showConnection();
    void showLogo();
    void showStones();
    void showCountdown();
    void resetCountdown();
    void startCountdown();
    void showScore();
    void updateName();
    void updateScore();
    void resetScore();
    void showCustomMessage();
    void showGameName();
    void switchStream1();
    void switchCamera();
    void switchBack();
    void DisplayPPGameLocal(int);
    void PPPrepareGame();
    void PPStartGame();
    void PPStopGame();
    void ShowPP();
    void clickPP01(bool);
    void clickPP02(bool);
    void clickPP03(bool);
    void clickPP04(bool);
    void clickPP05(bool);
    void clickPP06(bool);
    void clickPP07(bool);
    void clickPP08(bool);
    void clickPP09(bool);
    void clickPP10(bool);
    void clickPP11(bool);
    void clickPP12(bool);
    void clickPP13(bool);
    void clickPP14(bool);
    void clickPP15(bool);
    void clickPP16(bool);
    void clickPP17(bool);
    void clickPP18(bool);
    void clickPP19(bool);
    void clickPP20(bool);
    void clickPP21(bool);
    void clickPP22(bool);
    void clickPP23(bool);
    void clickPP24(bool);
    void clickPP25(bool);
    void clickPP26(bool);
    void clickPP27(bool);
    void clickPP28(bool);
    void clickPP29(bool);
    void clickPP30(bool);
    void clickPP31(bool);
    void clickPP32(bool);
    void clickPP33(bool);
    void clickPP34(bool);
    void clickPP35(bool);
    void clickPP36(bool);

private:
    Ui::Controller *ui;
    QUdpSocket socket;
    QVector< QCheckBox* > m_PPAnswers;
    struct PPGame
    {
        QString Name;
        QVector<QString> Answers;
    };
    QVector<PPGame*> m_PPGames;

    void clickPP(int num, bool status);
};

#endif // CONTROLLER_H
