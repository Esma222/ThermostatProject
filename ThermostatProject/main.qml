import QtQuick 2.12
import QtQuick.Window 2.12
import Monty 1.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Thermostat Project")

    SystemController{
        id: systemController

    }

    Loader{
       id:mainLoader
       anchors.fill: parent
       source: "./ui/HomeScreen/HomeScreen.qml"
    }

}
