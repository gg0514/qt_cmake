#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    // 1.qrc
    engine.load(QUrl(QStringLiteral("qrc:/qt/qml/helloqml/Main.qml")));

    // 2.Module
    //engine.loadFromModule("helloqml", "Main");

    // 3.localfile
    //engine.load(QUrl::fromLocalFile("main.qml"));  // 실행 파일과 같은 폴더에 있는 경우


    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
