#include "requestfactory.h"
#include <mainwindow.h>
RequestFactory::RequestFactory()
{

}

QNetworkRequest RequestFactory::getRequest(QString repoUrl)
{
    QStringList parts = repoUrl.split(QChar('/'), QString::SkipEmptyParts);
    //int siteIndex = parts.indexOf(QRegularExpression("(\\w*).github.com", QRegularExpression::CaseInsensitiveOption));

    qDebug() << QString("https://api.github.com/repos/%1/%2/commits")
                .arg(parts[2], parts[3]);
    return QNetworkRequest(QUrl(
        QString("https://api.github.com/repos/%1/%2/commits")
        .arg(parts[2], parts[3])));
}


