import serial
from vpython import *


arduinoSerialData = serial.Serial('com3',9600)
measuringRod = cylinder(length = 6, color=color.yellow, radius = .1, pos=vector(-3,-2,0))
lengthLabel = label(text = ' Target Distance is: ', pos=vector(0,2,0), height = 30, box = False)
target = box(pos = vector(0,-.5,0), color = color.green, length = .2, width = 3, height = 3)

while (1 == 1):
    rate(20)
    if arduinoSerialData.inWaiting() > 0:
        myData = arduinoSerialData.readline()
        distance = float(myData)
        print(distance)
        myLabel = 'Target Distance is: ' + str(myData.decode('utf-8'))
        lengthLabel.text = myLabel
        measuringRod.length = distance
        target.pos = vector((-3+distance) ,-.5,0)