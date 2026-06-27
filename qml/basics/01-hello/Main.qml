import QtQuick
import QtQuick.Controls

Window {
    id: root
    visible: true
    width: 640
    height: 480
    title: "Hello Qt"

    Label {
        anchors.centerIn: parent
        text: "Hello Qt 6!"
    }
}