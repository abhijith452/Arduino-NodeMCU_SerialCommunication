String  value_1;
String  value_2;
String  value_3 ;



#include <SoftwareSerial.h>
SoftwareSerial s(D6,D5);

 
void setup() {
 
 
  Serial.begin(9600);
  s.begin(9600);
 
 
}
 
void loop() {
 

 

 


  from_arduino ();


   Serial.println(value_1);
 Serial.println(value_2);
  Serial.println(value_3);
}



void from_arduino ()
{


s.write(5);

    value_1 = (s.readString());
   

s.write(6);
    value_2 = (s.readString());
     

s.write(7);
    value_3 = (s.readString());
     
 

}
