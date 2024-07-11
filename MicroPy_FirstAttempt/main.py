from machine import Pin, ADC, PWM
from MicroPy_FirstAttempt.L298N_motor import L298N
import time

ENA = PWM(Pin(0))
IN1 = Pin(1, Pin.OUT)
IN2 = Pin(2, Pin.OUT)

speed = 40000

adc = ADC(26)
red = Pin(14, Pin.OUT)
green = Pin(15, Pin.OUT)
motor = L298N(ENA, IN1, IN2)
motor.setSpeed(speed)


try:
    while True:
        print(adc.read_u16())
        print(speed)
        if(adc.read_u16() > 64000):
            red.value(1)
            green.value(0)
            print("Dark")
            motor.stop()
        elif(adc.read_u16() > 43000):
            red.value(1)
            green.toggle()
            print("Shade")
            motor.forward()
        elif(adc.read_u16() > 29000):
            green.value(1)
            red.toggle()
            print("Sunny/Shade")
        else:
            green.value(1)
            red.value(0)
            print("Direct Sun")
        time.sleep(0.5)
        
except:
    red.toggle()
    green.toggle()


