#include <Servo.h>

Servo servo_0; 
Servo servo_1; 
Servo servo_2; 
Servo servo_3; 
Servo servo_4; 
Servo servo_5; 
Servo servo_6; 

void setup() {
  Serial.begin(9600); 
  servo_0.attach(2); 
  servo_1.attach(3); 
  servo_2.attach(4); 
  servo_3.attach(5); 
  servo_4.attach(6); 
  servo_5.attach(7); 
  servo_6.attach(8); 
}

void loop() {
  if (Serial.available() > 0) { 
    String input = Serial.readStringUntil('\n'); 
    int servoIndex = input.substring(0, 1).toInt(); 
    int servoValue = input.substring(2).toInt(); 
    
    switch (servoIndex) {
      case 1:
        servo_0.write(servoValue);
        break;
      case 2:
        servo_1.write(servoValue);
        break;
      case 3:
        servo_2.write(servoValue);
        break;
      case 4:
        servo_3.write(servoValue);
        break;
      case 5:
        servo_4.write(servoValue);
        servo_6.write(180 - servoValue);
        break;
      case 6:
        servo_5.write(servoValue);
        
        break;
      default:
        
        break;
    }
  }
}
