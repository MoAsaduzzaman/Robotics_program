/*A sample program for Controlling Brightness of LED*/

int led=6;

void setup(){
    pinMode(led,OUTPUT); 

}

void loop(){
    analogWrite(led,10);
    delay(1000);
    analogWrite(led,225);
    delay(1000);
}
 
/*Another way for this program using for loop*/

int led=6;

void setup(){
    pinMode(led,OUTPUT);

}

void loop(){
    for(int i=0; i<=255; i+=10;){
        analogWrite(led,i);
        delay(5000);
    }
}
