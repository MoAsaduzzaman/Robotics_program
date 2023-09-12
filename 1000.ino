/* A sample program for blink a LED for a specific amount of time. */

void setup(){
    pinMode(2,OUTPUT); 
}

void loop(){
    digitalWrite(2,HIGH);
    delay(1000);
    digitalWrite(2,LOW);
    delay(1000);
}
