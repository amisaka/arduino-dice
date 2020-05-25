#!/usr/bin/python3

import serial
import webbrowser   # version 1
ser = serial.Serial("/dev/ttyACM0", 9600)     # version 1 
ser.flushInput()    # version 1

while True:
	try:
		# The following two lines are used for
		# converting a binary text to utf-8
		# 
		lface = ser.readline().decode('utf-8').split()
		face = ''.join(lface)
		if face == '1':
		   webbrowser.open('face1.jpg')   # version 1
		   # print('One')
		elif face == '2':
		   webbrowser.open('face2.jpg')   # version 1
		   # print('Two')
		elif face == '3':
		   webbrowser.open('face3.jpg')   # version 1
		   # print('Three')
		elif face == '4':
		   webbrowser.open('face4.jpg')   # version 1
		   # print('Four')
		elif face == '5':
		   webbrowser.open('face5.jpg')   # version 1
		   # print('Five')
		else:
		   webbrowser.open('face6.jpg')   # version 1
		   # print('Six')
	except:
		print("Keyboard Interrupt")
		break
