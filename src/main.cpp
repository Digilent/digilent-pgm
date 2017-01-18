#include "mainWindow.h"

#include <QApplication>
#include <QDebug>
#include <QList>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QString>

#include <QtSerialPort/QSerialPort>
#include <QTextStream>
#include <QCoreApplication>
#include <QFile>
#include <QStringList>

#include "lib/digilent/pgm/digilentPgm.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qDebug() << "Here we go!";

    //Load arguments into args, ignoring the program name
    QVector<QString> args = QVector<QString>();
    for(int i=1; i<argc; i++)
    {
        args.append(QString(argv[i]));
    }

    try
    {
        DigilentPgm* pgm = new DigilentPgm(args);
    }
    catch(int e)
    {
        qDebug() << "An exception occured" << e;
    }

    //GUI Stuff

    //QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

    //return a.exec();
    return 0;


}
