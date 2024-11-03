import QtQuick 2.15
import QtQuick.Window 2.15

Window {
    visible: true
    width: 400
    height: 300
    title: "QML Resource Example"

    Image {
        source: "qrc:/qt/qml/helloqml/images/icon.png"
        anchors.centerIn: parent
        width: 100
        height: 100
    }
}