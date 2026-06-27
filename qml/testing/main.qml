import QtQuick
import QtQuick.Controls

Window {
    width: 640
    height: 480
    visible: true
    title: "Hello QML"
    color: "#1e1e2e"

    Rectangle {
        id: centerBox
        width: 200
        height: 100
        color: "#cba6f7"
        radius: 12
        anchors.centerIn: parent

        Text {
            text: "Click Me"
            anchors.centerIn: parent
            color: "#11111b"
            font.bold: true
            font.pointSize: 14
        }

        MouseArea {
            anchors.fill: parent
            hoverEnabled: true
            onClicked: {
                centerBox.color = "#a6e3a1";
            }
        }
    }
}
