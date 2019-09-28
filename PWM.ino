/* RGB Analog Example, Teensyduino Tutorial #2
   http://www.pjrc.com/teensy/tutorial2.html

   This example code is in the public domain.
*/
#define H_BRIDGE_ENABLE 12

const int speed_pin =  PIN_D7;
const int right_motor_1A_pin =  PIN_B4;
const int right_motor_2A_pin =  PIN_F7;


void setup()   {                
  pinMode(speed_pin, OUTPUT);
  pinMode(right_motor_1A_pin, OUTPUT);
  pinMode(right_motor_2A_pin, OUTPUT);

  digitalWrite(PIN_B4, HIGH);
  digitalWrite(PIN_F7, LOW);
  //digitalWrite(speed_pin, HIGH);
   move_forward(255);
}

void move_forward(int speed)
{
  digitalWrite(right_motor_1A_pin, LOW);
  digitalWrite(right_motor_2A_pin, HIGH);
  analogWrite(speed_pin, speed);
}


void loop()                     
{
  //move_forward(100);
  //delay(10000);
  //analogWrite(speed_pin, 200);
}

//void loop()                     
//{
//  analogWrite(redPin, 30);
//  delay(500);
//  analogWrite(greenPin, 200);
//  delay(500);
//  analogWrite(bluePin, 40);
//  delay(500);
//  analogWrite(redPin, 150);
//  delay(500);
//  analogWrite(greenPin, 0);
//  delay(500);
//  analogWrite(bluePin, 250);
//  delay(500);
//}
