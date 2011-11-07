#ifndef RECEIVE_H
#define	RECEIVE_H

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
#include <QTableWidgetItem>
#include <QHeaderView>
#include <QGroupBox>
#include <QVBoxLayout>
#include <QSpacerItem>
<<<<<<< HEAD
=======

>>>>>>> 2eacb6f8f27d6c7af85d9f7b5e8cdb7fde9b2216
#include <QDirModel>
#include <QTreeView>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
<<<<<<< HEAD
#include "MessageEditor.h"

=======

#include "MessageEditor.h"


>>>>>>> 2eacb6f8f27d6c7af85d9f7b5e8cdb7fde9b2216
#define MAX_TABLE_SIZE 1000

class Receive : public QGroupBox
{
    Q_OBJECT
    QGridLayout *RecLayout;

public:
    Receive(QWidget *Rec);

private slots:
    void RecTableClear();
    void ReceiveSlot(int ID,int DLC,QString DATA,QTime time);
    void RecTableSave();

private:
    QTableWidget *RecTab;
    QPushButton *RecClearButton;
    QPushButton *RecSaveButton;
    QSpacerItem *VerticalSpacer;

    int k;
    int i;
    int j;
<<<<<<< HEAD

=======
>>>>>>> 2eacb6f8f27d6c7af85d9f7b5e8cdb7fde9b2216
};


#endif	/* RECEIVE_H */

