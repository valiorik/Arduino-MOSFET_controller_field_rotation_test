

int RightMotorDirectionPin = 7;
int RightMotorPwnPin = 9;
int LeftMotorDirectionPin = 8;
int LeftMotorPwnPin = 10;

// states:
// 0 - stopped
// positive values up to 99 - moving forward
// negative values down to -99 - moving backwards
int RightMotorState = 0;
int LeftMotorState = 0;

void setup() {
 
  pinMode(RightMotorDirectionPin, OUTPUT);
  pinMode(RightMotorPwnPin, OUTPUT);
  pinMode(LeftMotorDirectionPin, OUTPUT);
  pinMode(LeftMotorPwnPin, OUTPUT);
  
  analogWrite(RightMotorPwnPin, 0);
  analogWrite(LeftMotorPwnPin, 0);
}

void loop() {
  

  // move forward for 5 seconds
  digitalWrite(LeftMotorDirectionPin, HIGH);
  analogWrite(LeftMotorPwnPin, 255);  
  digitalWrite(RightMotorDirectionPin, HIGH);
  analogWrite(RightMotorPwnPin, 255);
  delay(5000);
  
  
  // turn right
  digitalWrite(LeftMotorDirectionPin, HIGH);
  analogWrite(LeftMotorPwnPin, 255);
  digitalWrite(RightMotorDirectionPin, LOW);
  analogWrite(RightMotorPwnPin, 255);
  delay(2500);  
  
  

  
  
  // go backwards a little
  digitalWrite(LeftMotorDirectionPin, LOW);
  analogWrite(LeftMotorPwnPin, 255);
  digitalWrite(RightMotorDirectionPin, LOW);
  analogWrite(RightMotorPwnPin, 255);
  delay(2000);    


  // stop for a sec
  analogWrite(LeftMotorPwnPin, 0);  
  analogWrite(RightMotorPwnPin, 0);
  delay(1000);
  
}
