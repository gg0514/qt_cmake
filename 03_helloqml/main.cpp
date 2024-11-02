#include <QGuiApplication>
#include <QQmlApplicationEngine>

//using namespace Qt::Literals::StringLiterals;

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;

    QObject::connect(&engine, &QQmlApplicationEngine::objectCreationFailed,
                     &app, []() { QCoreApplication::exit(-1); },
                     Qt::QueuedConnection);

    const QUrl url("qrc:/qt/qml/helloqml/main.qml");
    engine.load(url);

//    engine.loadFromModule("helloqml", "main.qml");          // uri, typename

    return app.exec();
}
