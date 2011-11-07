#ifndef MAINWINDOW_H
#define	MAINWINDOW_H

#include <QtGui/QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QDateTime>
#include <QTime>
#include <QMainWindow>
#include "MessageEditor.h"
#include "Transmit.h"
#include "Receive.h"
#include "Connection.h"
<<<<<<< HEAD
#include "controller.h"
#include "msg.h"

=======

#include "controller.h"
#include "msg.h"


>>>>>>> 2eacb6f8f27d6c7af85d9f7b5e8cdb7fde9b2216
class MainWindow : public QWidget, public CanListener
{
    Q_OBJECT
    QVBoxLayout *MainLayout;

public:
    MainWindow (QWidget *MainWin, Controller *mContr);

    int notify();
    int errorInNet(const char *str);
<<<<<<< HEAD

signals:
=======
    int getnum();
    void setContrNum();
    int num;

    signals:
>>>>>>> 2eacb6f8f27d6c7af85d9f7b5e8cdb7fde9b2216
    void ReceiveSignal(int ID,int DLC,QString DATA,QTime time);

public slots:
    int connect();
    int disconnect();
    void showCredits();
<<<<<<< HEAD
=======
    void setCurrentNum();

>>>>>>> 2eacb6f8f27d6c7af85d9f7b5e8cdb7fde9b2216

private:
    MessageEditor *MessEd; 
    Transmit *Trans; 
    Receive *Rec;
    Connection *Con;
    Controller *Contr;
};

#endif	/* MAINWINDOW_H */

