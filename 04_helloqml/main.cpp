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

    // 히스토리를 말하자면,
    // Qt5.0 에서 Qml의 빌드시스템을 qmake를 사용하였고,
    // 이때, qrc (Qt Resource Collection) 라는 리소스 관리파일을 사용함.
    // Qt6.0 에서 Qml의 빌드시스템을 cmake를 사용하고,
    // 이때, qrc를 사용하지 않고, cmake를 사용하여 리소스 관리함.

    // 1.qrc
    // 더이상 qrc경로를 사용하지 않아도 된다.
    // engine.load(QUrl(QStringLiteral("qrc:/qt/qml/helloqml/Main.qml")));

//    engine.loadFromModule("helloqml", "main.qml");          // uri, typename

    return app.exec();
}
