// datahandler.cpp
#include "datahandler.h"

DataHandler::DataHandler(const QString& ticketFrom, const QString& ticketDest, const QString& ticketPrice)
    : m_ticketFrom(ticketFrom), m_ticketDest(ticketDest), m_ticketPrice(ticketPrice)
{}

void DataHandler::processAndPrintData()
{
    qDebug() << "Ticket info From: " << m_ticketFrom << " Destination: " << m_ticketDest << " Price: " << m_ticketPrice;
}
