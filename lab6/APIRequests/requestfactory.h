#ifndef REQUESTFACTORY_H
#define REQUESTFACTORY_H

#include <QNetworkRequest>
#include <QUrl>
#include <QRegularExpression>


class RequestFactory
{
public:
    RequestFactory();
    QNetworkRequest getRequest(QString repoUrl);
};

#endif // REQUESTFACTORY_H
