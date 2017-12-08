#include "xmlserialization.h"

XmlNodeList XmlSerializer::loadXml(QString path)
{
  if (reader)
      delete reader;

  reader = new QXmlStreamReader(new QFile(path));

  while (!reader->atEnd()) {
      reader->readNext();

  }
  if (reader->hasError()) {

  }
}

XmlSerializer::~XmlSerializer()
{
  delete reader;
}

void XmlSerializer::dispatchToken(QXmlStreamReader::TokenType token)
{
  
}
