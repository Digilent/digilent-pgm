#include "mainWindow.h"

#include <QApplication>
#include <QDebug>
#include <QList>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QString>
#include <QTime>
#include <QtSerialPort/QSerialPort>
#include <QTextStream>
#include <QCoreApplication>
#include <QFile>
#include <QStringList>

#include "lib/digilent/pgm/digilentPgm.h"

int main(int argc, char *argv[])
{
    DigilentPgm pgm;
    QApplication a(argc, argv);

    qDebug() << "\nDigilentPGM v2.0.0";
    qDebug() << "Digilent Copyright 2017";
    qDebug() << "Written by Keith Vogel";
    qDebug() << "Contributions from: Sam Kristoff";

    QDateTime now = QDateTime::currentDateTime();
    qDebug() << now.toString("dddd, MMMM, dd, yyyy, h:mm:ss AP t") << "\n\n";

    //Load arguments into args, ignoring the program name
    QVector<QString> args = QVector<QString>();
    for(int i=1; i<argc; i++)
    {
        args.append(QString(argv[i]));
    }

    if(args.length() == 2)
    {
        pgm.programByPort(args[0], args[1]);
    }
    else if (args.length() == 3 && args[1] == "BoardName")
    {
        pgm.programByBoardName(args[0], args[2]);
    }
    else
    {
        qDebug() << "Invalid number of parameters: 2 parameters are required but " << args.length() << " parameters were provided.";
        return -1;
    }

    //GUI Stuff

    //QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

    //return a.exec();
    return 0;

}
