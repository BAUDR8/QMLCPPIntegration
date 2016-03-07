import QtQuick 2.5
import QtQuick.Window 2.2
import QtQuick.Controls 1.4
import MyClass 1.0

Window {
    visible: true

    Joey {
        id: theintegrationstuff
    }

    Rectangle{
        id: backgroundRectangle
        anchors.fill: parent
        color: "orange"
    }

    Button {
        id: testButton
        anchors.centerIn: backgroundRectangle
        text: "Increase"
        onClicked: {
            theintegrationstuff.increaseVariable()
        }
    }

    Text {
        id: label
        anchors.bottom: testButton.top
        anchors.horizontalCenter: parent.horizontalCenter
        text: theintegrationstuff.JoeyVariable

    }
}
