#include "Wire.h"

const byte mcp_add = 0x20;

void setup() 
{
  Wire.begin();

  Wire.beginTransmission(mcp_add);
  Wire.write(0x01);
  Wire.write(0x00);
  Wire.endTransmission();

  Wire.beginTransmission(mcp_add);
  Wire.write(A5);
  Wire.write(0);
  Wire.endTransmission();

  Wire.beginTransmission(mcp_add);
  Wire.write(0x00);
  Wire.write(0x00);
  Wire.endTransmission();

  Wire.beginTransmission(mcp_add);
  Wire.write(A4);
  Wire.write(0);
  Wire.endTransmission();
}

void loop() 
{
  Wire.beginTransmission(mcp_add);
  Wire.write(A5);
  Wire.write(0x04);
  Wire.endTransmission();

  Wire.beginTransmission(mcp_add);
  Wire.write(A4);
  Wire.write(0);
  Wire.endTransmission();

  delay(1000);

  Wire.beginTransmission(mcp_add);
  Wire.write(A5);
  Wire.write(0);
  Wire.endTransmission();

  Wire.beginTransmission(mcp_add);
  Wire.write(A4);
  Wire.write(0);
  Wire.endTransmission();

  delay(1000);
}