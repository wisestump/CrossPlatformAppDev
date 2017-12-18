#ifndef XMLSERIALIZATION_H
#define XMLSERIALIZATION_H

#include <QXmlStreamReader>
#include <QFile>

#include "xmlnode.h"

class XmlSerializer
{
public:
  XmlNodeList loadXml(QString path);
  ~XmlSerializer();

private:
  void dispatchToken(QXmlStreamReader::TokenType token);

  QXmlStreamReader* reader = NULL;
};

#endif // XMLSERIALIZATION_H
