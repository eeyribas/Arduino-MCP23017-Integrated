#include <Wire.h>

int datalar[8] = {};

void setup() 
{
  Serial.begin(9600);
  Wire.begin();
  Wire.write((byte)0x01);
}

void loop() 
{
  for (int i = 0; i < 8; i++)
    datalar[i] = 0;

  Wire.beginTransmission(0x20);
  Wire.write(0x12);
  Wire.endTransmission();

  Wire.requestFrom(0x20, 1);
  int inputs = Wire.read();
  ConvertDecToBin(inputs, datalar);

  for (int i = 0; i < 8; i++) {
    Serial.print(datalar[i]);
    Serial.print("\t");
  }

  delay(1000);
  Serial.println();
}

void ConvertDecToBin(int dec, int bin[]) 
{
  for (int i = 7; i >= 0; i--) {
    if (pow(2, i) <= dec) {
      dec = dec - pow(2, i);
      bin[8 - (i + 1)] = 1;
    }
  }
}