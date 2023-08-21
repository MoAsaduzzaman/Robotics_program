/* A sample program for controlling relay channel */

int relay_1 = 7;
int relay_2 = 6;
int relay_3 = 5;
int relay_4 = 4;

void setup(){
    pinMode(relay_1,OUTPUT);
    pinMode(relay_2,OUTPUT);
    pinMode(relay_3,OUTPUT);
    pinMode(relay_4,OUTPUT);
}

void loop(){
    digitalWrite(relay_1,LOW);
    delay(500);

    digitalWrite(relay_2,LOW);
    delay(500);

    digitalWrite(relay_3,LOW);
    delay(500);

    digitalWrite(relay_4,LOW);
    delay(500);

    digitalWrite(relay_4,HIGH);
    delay(500);

    digitalWrite(relay_3,HIGH);
    delay(500);

    digitalWrite(relay_2,HIGH);
    delay(500);

    digitalWrite(relay_1,HIGH);
    delay(500);
}