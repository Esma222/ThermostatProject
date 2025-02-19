import QtQuick 2.0




Rectangle{

id:heatSelectDialog
signal destroyMe()
anchors.fill: parent
color: Qt.rgba(0,0,0,0)

    MouseArea{
      anchors.fill: parent
      onClicked: heatSelectDialog.destroyMe()
    }

    function doing_in_loop() {
      for (var i = 0; i < 9; i++)  {
          console.log(i)
      }
    }


    ListModel{
      id: heatModel
        ListElement { controlText: "Heat" }
        ListElement { controlText: "Cool" }
        ListElement { controlText: "Auto" }
    }

    Rectangle{
        id: innerRectangle
        width: parent.width /2
        height: parent.height * .8
        anchors.centerIn:  parent
        color: "black"
        border.color: "white"
        border.width: 3
        radius: 5



       /* Column{
            spacing: 30
            anchors.centerIn: innerRectangle
            /*Text {
                id: first
                text: "one"
                anchors.centerIn: innerRectangle.Center

                color: "white"
                font.pixelSize: 30


            }
            Text {
                            id: second
                            text: "one"
                            color: "white"
                            font.pixelSize: 12
                        }
            Text {
                            id: third
                            text: "one"
                            color: "white"
                            font.pixelSize: 12
                        }



        }*/


    }
    ListView{
      id: heatListView
      anchors.fill:innerRectangle
      model: heatModel
      clip: true
      delegate: Rectangle{
          width: innerRectangle.width
          height:innerRectangle.height/3
          color:"black"
          border.color: "white"
          border.width: 4
          radius:5
          Text{
              anchors.centerIn: parent
              color: "white"
              font.pixelSize: 42
              text: controlText
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
