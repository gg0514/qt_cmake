#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    // 1.qrc
    // 더이상 qrc경로를 사용하지 않아도 된다.
    //engine.load(QUrl(QStringLiteral("qrc:/qt/qml/helloqml/main.qml")));

    // 2.Module
    // 여기서 인자는 URI명, File명 입력
    // 버그 하나는 File명 인자는 대문자로 시작해야 되는데, 실제파일명은 소문자도 된다는....
    //engine.loadFromModule("hello", "Main");		

    // 3.localfile
    // 여기서 웃긴 것은 Module에서는 File명 인자를 대문자로 시작해야 되는데, 여기서는 소문자도 된다는....
    engine.load(QUrl::fromLocalFile("main.qml"));  // 실행 파일과 같은 폴더에 있는 경우


    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
