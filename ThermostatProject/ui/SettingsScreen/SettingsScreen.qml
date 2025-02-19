import QtQuick 2.0
import QtQuick.Controls 2.12

Rectangle{
    id: settingsScreen
    color: "black"
    anchors.fill: parent

    Image{
      id:backButton
      anchors{
        left:  parent.left
        top: parent.top
      }
      width: 40
      height: 40
      source: "/ui/assets/previous.png"
      MouseArea{
        anchors.fill: parent
        onClicked: mainLoader.source = "../HomeScreen/HomeScreen.qml"
      }

}
       StackView{
         id:settingsStackView
         anchors.fill: parent
         initialItem: "SettingsMainMenu.qml"
         clip:true
       }





}
