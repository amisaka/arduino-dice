#!/usr/bin/python3

import serial
import webbrowser
ser = serial.Serial("/dev/ttyACM0", 9600)
ser.flushInput()

while True:
	try:
		lface = ser.readline().decode('utf-8').split()
		face = ''.join(lface)
		if face == '1':
		   webbrowser.open('face1.jpg')
		   # print('One')
		elif face == '2':
		   webbrowser.open('face2.jpg')
		   # print('Two')
		elif face == '3':
		   webbrowser.open('face3.jpg')
		   # print('Three')
		elif face == '4':
		   webbrowser.open('face4.jpg')
		   # print('Four')
		elif face == '5':
		   webbrowser.open('face5.jpg')
		   # print('Five')
		else:
		   webbrowser.open('face6.jpg')
		   # print('Six')
	except:
		print("Keyboard Interrupt")
		break
