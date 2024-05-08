// datahandler.h
#ifndef DATAHANDLER_H
#define DATAHANDLER_H

#include <QString>
#include <QDebug>

class DataHandler
{
public:
    DataHandler(const QString& ticketFrom, const QString& ticketDest, const QString& ticketPrice);
    void processAndPrintData();

private:
    QString m_ticketFrom;
    QString m_ticketDest;
    QString m_ticketPrice;
};

#endif // DATAHANDLER_H
