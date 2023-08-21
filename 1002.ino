/* A sample program for receiving data from user using Bluetooth/UART Module */

#include<SoftwareSerial.h>
SoftwareSerial obj(8,9);
String data;

void setup(){
    obj.begin(9600);
    Serial.begin(9600);
}

void loop(){
    while(obj.available()){
        char c=obj.read();
        data+=c;
    }
    Serial.Println(data);
    data="";

}