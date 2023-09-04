/* A sample program for displaying Alphaneumeric number in LCD Display */

#include<LiquidCrystal_I2C.h>
#include<Wire.h>

LiquidCrystal_I2C obj(0x3F,16,2);                     /*(HexAddress,column,row)*/
void setup(){
    obj.init();                                       /*When begin() is unavilable we use init()*/
    obj.backlight();
    obj.clear();
}

void loop(){
    obj.setCursor(3,0);                               /*(column index,row index)*/
    obj.print("Welcome to Robotics Class");
    obj.setCursor(3,1);
    obj.print("Section E");   
}