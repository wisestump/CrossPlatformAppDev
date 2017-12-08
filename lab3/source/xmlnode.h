#ifndef XMLNODE_H
#define XMLNODE_H

#include <QVector>

class XmlNode;
typedef QVector<XmlNode *> XmlNodeList;

class XmlNode
{
public:
  QString value;
  XmlNode *parent;
};

class XmlParent : public XmlNode
{
public:
  QVector<XmlNode *> children;
};

class XmlElement : public XmlParent
{

};

class XmlAttribute : public XmlNode
{
};

#endif // XMLNODE_H
