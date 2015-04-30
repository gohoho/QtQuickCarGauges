#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQuickView> //Not using QQmlApplicationEngine because many examples don't have a Window{}

int main(int argc, char* argv[])
{
    QGuiApplication app(argc,argv);
    QQmlApplicationEngine engine;
    engine.load(QUrl("qrc:/qml/main.qml"));
    QObject *topLevel = engine.rootObjects().value(0);
    QQuickWindow *window = qobject_cast<QQuickWindow *>(topLevel);
    window->show();
    return app.exec();
}
