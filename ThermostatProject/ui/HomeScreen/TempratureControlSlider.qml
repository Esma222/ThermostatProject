
import QtQuick 2.0
import QtQuick.Controls 2.12

Slider{
  id: tempratureConrolSlider
  value:systemController.TargetTemp
  from:55
  to:85
  stepSize: 1
  orientation:  Qt.Vertical
  onValueChanged: systemController.setTargetTemp(value)

  background: Rectangle{
     height: parent.height
     width: 3
     anchors.centerIn: parent

  }
  handle: Rectangle{
      y: tempratureConrolSlider.visualPosition *(tempratureConrolSlider.availableHeight- height)
    color: "black"
    height: 76
    width: 76
    radius: width/2
    border.color:"white"
    border.width: 3
    anchors.horizontalCenter: parent.horizontalCenter
    Text{
      anchors.centerIn: parent
      color:"white"
      font.pixelSize: 30
      text: tempratureConrolSlider.value
    }
  }
}
