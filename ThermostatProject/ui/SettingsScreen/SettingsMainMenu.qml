import QtQuick 2.0

Item {
    ListModel{
      id:settingsMainMenuListModel

      ListElement{ menuText: "Temprature Units"; iconSource: "/ui/assets/thermometer.png"}
      ListElement{ menuText: "Schedule"; iconSource: "/ui/assets/calendar.png"}
      ListElement{ menuText: "Wifi Settings"; iconSource: "/ui/assets/wifi.png"}
      ListElement{ menuText: "About"; iconSource: "/ui/assets/info-button.png"}
    }


Rectangle{

   id:stackViewBackround
   x: 61
   y:50
   color: "black"
   border.color: "white"
   border.width: 3
   width: parent.width *.8
   height:parent.height *.8
   radius: 5
}



    ListView{
      id: settingsListView
      anchors.fill:stackViewBackround
      model: settingsMainMenuListModel
      clip: true
      delegate: Rectangle{
          width: settingsListView.width
          height:settingsListView.height/4
          color:"black"
          border.color: "white"
          border.width: 4
          radius:5
          Image{
                 id: iconImage
               anchors {
                 verticalCenter: parent.verticalCenter
                 left: parent.left
                 leftMargin:30
               }
               source: iconSource
               height:48
               width: 48
             }
          Text{
              anchors{
                  verticalCenter: parent.verticalCenter
                  left:iconImage.right
                  leftMargin: 40
              }
              color: "white"
              font.pixelSize: 30
              text: menuText
          }
          MouseArea{
              anchors.fill: parent
              onClicked: {
                  if(controlText === "Heat")
                      systemController.setSystemState(0)
                  else if(controlText === "Cool")
                      systemController.setSystemState(1)
                  else if(controlText === "Auto")
                      systemController.setSystemState(2)
                  heatSelectDialog.destroyMe();

              }
          }

      }
    }
}
