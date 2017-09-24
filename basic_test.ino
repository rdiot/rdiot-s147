/* 5V 4-Channel Relay Module [S147] : http://rdiot.tistory.com/101 [RDIoT Demo] */

#define RELAY1  8                        
#define RELAY2  9                        
#define RELAY3  10                        
#define RELAY4  11

void setup()
{    
  pinMode(RELAY1, OUTPUT);       
  pinMode(RELAY2, OUTPUT);
  pinMode(RELAY3, OUTPUT);
  pinMode(RELAY4, OUTPUT);
}
 void loop()
{
   digitalWrite(RELAY1,LOW);           // Turns ON Relays 1
   delay(2000);                        // Wait 2 seconds
   digitalWrite(RELAY1,HIGH);          // Turns Relay Off
   digitalWrite(RELAY2,LOW);           // Turns ON Relays 2
   delay(2000);                        // Wait 2 seconds
   digitalWrite(RELAY2,HIGH);          // Turns Relay Off
   digitalWrite(RELAY3,LOW);           // Turns ON Relays 3
   delay(2000);                        // Wait 2 seconds
   digitalWrite(RELAY3,HIGH);          // Turns Relay Off
   digitalWrite(RELAY4,LOW);           // Turns ON Relays 4
   delay(2000);                        // Wait 2 seconds
   digitalWrite(RELAY4,HIGH);          // Turns Relay Off        
}
