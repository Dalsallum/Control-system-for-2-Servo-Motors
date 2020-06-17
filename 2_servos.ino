const int button1 = 4; 
const int button1 = 5; 

int buttonstate1 = 0;
int buttonstate2 = 0;


void setup()

{
   
pinMode(2,OUTPUT); 
pinMode(3,OUTPUT); // pins 2 and 3 for the first motor
pinMode(8,OUTPUT);
pinMode(9,OUTPUT); // pins 8 and 9 for the second motor
pinMode(button1,INPUT);
pinMode(button2,INPUT); // pins 4 and 5 for push buttons that will control the direction of the first motor

}

void loop()
{
    buttonState1 = digitalRead(button1);
        buttonState2 = digitalRead(button2);



  if (button1 == high){

    digitalWrite(2,HIGH);
        digitalWrite(3,LOW);


    else {

          digitalWrite(2,LOW);
              digitalWrite(3,HIGH);
    }


  }


if (button2 == high){

    digitalWrite(8,HIGH);
        digitalWrite(9,LOW);


    else {

          digitalWrite(8,LOW);
              digitalWrite(9,HIGH);
    }

    
  }


}
