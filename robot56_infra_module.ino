//L293D
//Motor A
const int motorPin1  = 5;  // Pin 15 of L293
const int motorPin2  = 6;  // Pin 10 of L293
//Motor B
const int motorPin3  = 10; // Pin  7 of L293
const int motorPin4  = 9;  // Pin  2 of L293

int leftInput=A3;
int rightInput=A4;
int leftValue = 0;
int rightValue = 0;

//This will run only one time.
void setup(){

  Serial.begin (9600);
    //Set pins as outputs
    pinMode(motorPin1, OUTPUT);
    pinMode(motorPin2, OUTPUT);
    pinMode(motorPin3, OUTPUT);
    pinMode(motorPin4, OUTPUT);
    //Motor Control - Motor A: motorPin1,motorpin2 & Motor B: motorpin3,motorpin4
    //This code  will turn Motor A clockwise for 2 sec.
  /*  digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, LOW);
    delay(2000); 
    //This code will turn Motor A counter-clockwise for 2 sec.
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, HIGH);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, LOW);
    delay(2000);
    
    //This code will turn Motor B clockwise for 2 sec.
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, HIGH);
    digitalWrite(motorPin4, LOW);
    delay(2000); 
    //This code will turn Motor B counter-clockwise for 2 sec.
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, HIGH);
    delay(2000);    
    //And this code will stop motors
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, LOW);*/
}
void loop(){
  leftValue = digitalRead (leftInput);
  rightValue= digitalRead (rightInput);
  Serial.print("left=");    
  Serial.println (leftValue);
  Serial.print("right=");  
  Serial.println (rightValue);
  delay(1000);
  if( leftValue == 0 && rightValue== 0)       // foward 
   {
     // fornt left pin2 hight
     // fornt right pin4 hight
     // back left pin1 hight
     // back right pin3 hight
   
    digitalWrite(motorPin1, LOW);  
    digitalWrite(motorPin2, HIGH); 
    digitalWrite(motorPin3, LOW);  
    digitalWrite(motorPin4, HIGH); 
     
   }
   else {  
     if( leftValue == 1 && rightValue == 0)    // turn left
    {
    digitalWrite(motorPin1, LOW);  
    digitalWrite(motorPin2, LOW); 
    digitalWrite(motorPin3, LOW);  
    digitalWrite(motorPin4, HIGH);
      
    }
 else {
   if (leftValue ==0 && rightValue ==1)        // turn right
   {
    digitalWrite(motorPin1, LOW);  
    digitalWrite(motorPin2, HIGH); 
    digitalWrite(motorPin3, LOW);  
    digitalWrite(motorPin4, LOW);
   }
   else
   { if (leftValue == 1 && rightValue ==1)     // stop
    {    
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, LOW);
     }
    }
   }
}}
