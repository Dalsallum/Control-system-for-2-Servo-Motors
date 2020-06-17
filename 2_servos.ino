int buttonState = 0;
#include <Servo.h>
int x = 0;
int y = 0 ;
Servo  Myservo1;
Servo Myservo2;
void setup()
{
   
  Myservo1.attach(9);
  Myservo2.attach(3);
}

void loop()
{
  
 for ( x ; x <= 180 ; x=x+1){
  Myservo2.write(x);
  delay(10);
  
    }
  for ( y ; y <= 180 ; y=y+1){
  Myservo1.write(y);
  delay(10);
  
    }
  
 
  for ( x = 180 ; x >= 0 ; x=x-1){
  Myservo2.write(x);
  delay(10);
  }
  
  for ( y = 180 ; y >= 0 ; y=y-1){
  Myservo1.write(y);
  delay(10);
  }
  
  
    


}
