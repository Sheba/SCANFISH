#ifndef CONNECTION_H
#define	CONNECTION_H

#include <QtGui/QApplication>
#include <QLabel>
#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QLayout>
#include <QHeaderView>
#include <QScrollArea>
#include <QGridLayout>
#include <QTableWidget>
#include <QHeaderView>
#include <QPaintEvent>
#include <QPainter>
#include "canlistener.h"
<<<<<<< HEAD

=======
>>>>>>> 2eacb6f8f27d6c7af85d9f7b5e8cdb7fde9b2216
class Connection : public QWidget
{
    Q_OBJECT
    QHBoxLayout *ConnectionLayout;
<<<<<<< HEAD

public:
    Connection(QWidget *Con, CanListener *mcanl);

signals:
    void active();
    void disactive();

=======
public:
    Connection(QWidget *Con, CanListener *mcanl);

    signals:
    void active();
    void disactive();
    void changeNum();
>>>>>>> 2eacb6f8f27d6c7af85d9f7b5e8cdb7fde9b2216
private slots:
    void ConnectClicked();
    void DisconnectClicked();
    void EnableConnectButton();

private:
    QLabel *Interface;
    QLineEdit *can0;
    QPushButton *ConnectButton;
    QPushButton *DisconnectButton;
    QLabel *St;
    QLabel *OnOff;
    QSpacerItem *horizontalSpacer;
    CanListener *canl;
    QByteArray strInt;
    int push;
<<<<<<< HEAD

=======
>>>>>>> 2eacb6f8f27d6c7af85d9f7b5e8cdb7fde9b2216
};

#endif	/* CONNECTION_H */

