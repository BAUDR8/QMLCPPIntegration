#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "qqml.h"
#include "myclass.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    qmlRegisterType<MyClass>("MyClass", 1, 0, "Joey");

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
