import QtQuick 2.3
import QtQuick.Window 2.2

Window {
    visible: true

    MouseArea {
        anchors.fill: parent
        onClicked: {
            Qt.quit();
        }
    }

    GridView {
        id: gridView1
        x: -527
        y: -321
        width: 919
        height: 631
        delegate: Item {
            x: 5
            height: 50
            Column {
                spacing: 5
                Rectangle {
                    width: 40
                    height: 40
                    color: colorCode
                    anchors.horizontalCenter: parent.horizontalCenter
                }

                Text {
                    x: 5
                    text: name
                    anchors.horizontalCenter: parent.horizontalCenter
                    font.bold: true
                }
            }
        }
        model: ListModel {
            ListElement {
                name: "Grey"
                colorCode: "grey"
            }

            ListElement {
                name: "Red"
                colorCode: "red"
            }

            ListElement {
                name: "Blue"
                colorCode: "blue"
            }

            ListElement {
                name: "Green"
                colorCode: "green"
            }
        }
        cellHeight: 70
        cellWidth: 70

        TextInput {
            id: textInput1
            x: 14
            y: 227
            width: 176
            height: 18
            text: qsTr("Text Input")
            font.pixelSize: 12
        }

        Text {
            id: text1
            x: 222
            y: 231
            width: 192
            height: 14
            text: qsTr("Text")
            font.pixelSize: 12
        }

        TextInput {
            id: textInput2
            x: 12
            y: 253
            width: 176
            height: 18
            text: qsTr("Text Input")
            font.pixelSize: 12
        }

        Text {
            id: text2
            x: 222
            y: 257
            width: 192
            height: 14
            text: qsTr("Text")
            font.pixelSize: 12
        }

        TextInput {
            id: textInput3
            x: 14
            y: 277
            width: 174
            height: 20
            text: qsTr("Text Input")
            font.pixelSize: 12
        }
    }

    Image {
        id: image1
        x: 8
        y: -321
        width: 384
        height: 257
        source: "qrc:/qtquickplugin/images/template_image.png"
    }
}

