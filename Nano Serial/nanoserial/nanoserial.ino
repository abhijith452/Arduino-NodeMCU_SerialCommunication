#include <SoftwareSerial.h>

SoftwareSerial s(5,6);
char value_1[10];
char value_2[10]="";
char value_3[10];
void setup() 
{

  Serial.begin(9600);
s.begin(9600);


}

void loop()
{



send_to_nodemcu ();

}


void send_to_nodemcu ()
{
  int a = s.read();
  float b= (float(random(10,20))/10);
  float c = (float(random(60,80))/10);
  int d =random(20,30);

String str;
str=String(b);
dtostrf(b, 2, 2, value_1);
str=String(c);
dtostrf(c, 2, 2, value_2);
str=String(d);
str.toCharArray(value_3,10);
  if(a==5)
  {
s.write(value_1,10);
  }
  else if(a==6)
  {
s.write(value_2,10);

  }
  else if(a==7)
  {
s.write(value_3,10);

  Serial.println("MESSAGE SENT");
  }
  else
  {
  
  Serial.println("No msg");
  }
  
}

