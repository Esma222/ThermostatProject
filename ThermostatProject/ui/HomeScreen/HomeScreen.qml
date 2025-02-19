import QtQuick 2.0

Item {
    id: homeScreen
    property var heatSelectDialogHolder: null

    function createHeatSelectDialog(){
        if(heatSelectDialogHolder === null){
          var componenet = Qt.createComponent("HeatSelectDialog.qml")
            heatSelectDialogHolder= componenet.createObject(homeScreen,{"x": 0, "y": 0})
            if(heatSelectDialogHolder){
                heatSelectDialogHolder.anchors.fill= homeScreen
                heatSelectDialogHolder.destroyMe.connect(destroyHeatSelectDialog)}
        }
    }

    function destroyHeatSelectDialog(){
      if (heatSelectDialogHolder !== null){
        heatSelectDialogHolder.destroy()
          heatSelectDialogHolder = null
      }
    }

    Rectangle{
       id : mainBackround
       anchors.fill: parent
       color: "black"
    }
    Text {
        id: currentTempratureText
        anchors.centerIn: parent
        font.pixelSize: 200
        color:"white"
        text: systemController.CurrentSystemTemprature
    }
    Text {
        id: systemStatus
        anchors{
            horizontalCenter: parent.horizontalCenter
            top: currentTempratureText.bottom
            topMargin:20

        }
        font.pixelSize: 30
        color: "white"
        text: systemController.SystemStatusMessage
    }
    Image{
       id:heatCoolSelection
       anchors{
          top:tempratureSlider.top
          right:currentTempratureText.left
          rightMargin:80
          topMargin: 50
       }
       width: 70
       height: 70
       source:{
          if(systemController.SystemState ===0)
              return "/ui/assets/flame2.png"
          if(systemController.SystemState ===1)
              return  "/ui/assets/ice-crystal.png"
           if(systemController.SystemState ===2)
               return "/ui/assets/auto.jpeg"
    }
       MouseArea{
         anchors.fill: parent
         onClicked: createHeatSelectDialog()
       }




    }

    Image{
       id:settingsIcon
       anchors{
          bottom: tempratureSlider.bottom
          right:currentTempratureText.left
          rightMargin:80
          bottomMargin: 50
       }
       width: 70
       height: 70
       source: "/ui/assets/settings.png"
       MouseArea{
        anchors.fill: parent
        onClicked: mainLoader.source = "../SettingsScreen/SettingsScreen.qml"
       }

    }

    TempratureControlSlider{
      id: tempratureSlider
      anchors{
        left: currentTempratureText.right
        top: parent.top
        bottom: parent.bottom
        leftMargin:100
        topMargin: 80
        bottomMargin: 50
      }
    }

}
