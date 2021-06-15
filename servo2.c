#include <Servo.h>

int servosignal = 3;
Servo Anwar;
int movef=6;
int moveb=12;
int position = 0;

void setup()
{
  Anwar.attach(servosignal);
  pinMode(movef,INPUT);
  pinMode(moveb,INPUT);
  Anwar.write(position);
}

 void loop()
 {
 int fpuch = digitalRead(movef);
 int bpuch = digitalRead(moveb);
   if(fpuch == HIGH){
   
   Anwar.write(position);
     position++; //position = position+1
  delay(3.5);
   }
  if(bpuch == HIGH)
  {
   Anwar.write(position);
    position--; //position = position-1
    delay(3.5);
  }
 }
 
 
