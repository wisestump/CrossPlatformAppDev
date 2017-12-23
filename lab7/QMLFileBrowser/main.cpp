#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQuickView>
#include <QQmlContext>
#include <QDirModel>

#include "filesystem.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    QFileSystemModel *treeModel = new QFileSystemModel;
    treeModel->setRootPath(QDir::rootPath());

    //FileSystem *tableModel = new FileSystem();
    QDirModel *tableModel = new QDirModel();
    //tableModel->setRootPath(QDir::rootPath());
    tableModel->setFilter(QDir::AllEntries | QDir::NoDot);

    engine.rootContext()->setContextProperty("treeFileSystemModel", treeModel);
    engine.rootContext()->setContextProperty("tableFileSystemModel", tableModel);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));



//    QQuickView view;
//    view.setResizeMode(QQuickView::SizeRootObjectToView);
//    QQmlContext *ctxt = view.rootContext();
//    ctxt->setContextProperty("fileSystemModel", new QFileSystemModel());
//    view.setSource(QUrl(QStringLiteral("qrc:/main.qml")));
//    view.show();

    return app.exec();
}

