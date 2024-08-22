#include "Wire.h"

const byte mcp_add_1 = 0x20;
const byte mcp_add_2 = 0x21;

void setup() 
{
  Wire.begin();

  Wire.beginTransmission(mcp_add_1);
  Wire.write(0x01);
  Wire.write(0x00);
  Wire.endTransmission();

  Wire.beginTransmission(mcp_add_1);
  Wire.write(0);
  Wire.write(A5);
  Wire.endTransmission();

  Wire.beginTransmission(mcp_add_1);
  Wire.write(0x00);
  Wire.write(0x00);
  Wire.endTransmission();

  Wire.beginTransmission(mcp_add_1);
  Wire.write(0);
  Wire.write(A4);
  Wire.endTransmission();

  Wire.beginTransmission(mcp_add_2);
  Wire.write(0x01);
  Wire.write(0x00);
  Wire.endTransmission();

  Wire.beginTransmission(mcp_add_2);
  Wire.write(0);
  Wire.write(A5);
  Wire.endTransmission();

  Wire.beginTransmission(mcp_add_2);
  Wire.write(0x00);
  Wire.write(0x00);
  Wire.endTransmission();

  Wire.beginTransmission(mcp_add_2);
  Wire.write(0);
  Wire.write(A4);
  Wire.endTransmission();
}

void loop() 
{
  Wire.beginTransmission(mcp_add_1);
  Wire.write(A5);
  Wire.write(0x01);
  Wire.endTransmission();

  Wire.beginTransmission(mcp_add_1);
  Wire.write(A4);
  Wire.write(0);
  Wire.endTransmission();

  Wire.beginTransmission(mcp_add_2);
  Wire.write(A5);
  Wire.write(0);
  Wire.endTransmission();

  Wire.beginTransmission(mcp_add_2);
  Wire.write(A4);
  Wire.write(0);
  Wire.endTransmission();

  delay(1000);

  Wire.beginTransmission(mcp_add_1);
  Wire.write(A5);
  Wire.write(0);
  Wire.endTransmission();

  Wire.beginTransmission(mcp_add_1);
  Wire.write(A4);
  Wire.write(0x01);
  Wire.endTransmission();

  Wire.beginTransmission(mcp_add_2);
  Wire.write(A5);
  Wire.write(0);
  Wire.endTransmission();

  Wire.beginTransmission(mcp_add_2);
  Wire.write(A4);
  Wire.write(0);
  Wire.endTransmission();

  delay(1000);

  Wire.beginTransmission(mcp_add_1);
  Wire.write(A5);
  Wire.write(0);
  Wire.endTransmission();

  Wire.beginTransmission(mcp_add_1);
  Wire.write(A4);
  Wire.write(0);
  Wire.endTransmission();

  Wire.beginTransmission(mcp_add_2);
  Wire.write(A5);
  Wire.write(0x01);
  Wire.endTransmission();

  Wire.beginTransmission(mcp_add_2);
  Wire.write(A4);
  Wire.write(0);
  Wire.endTransmission();

  delay(1000);

  Wire.beginTransmission(mcp_add_1);
  Wire.write(A5);
  Wire.write(0);
  Wire.endTransmission();

  Wire.beginTransmission(mcp_add_1);
  Wire.write(A4);
  Wire.write(0);
  Wire.endTransmission();

  Wire.beginTransmission(mcp_add_2);
  Wire.write(A5);
  Wire.write(0);
  Wire.endTransmission();

  Wire.beginTransmission(mcp_add_2);
  Wire.write(A4);
  Wire.write(0x01);
  Wire.endTransmission();

  delay(1000);
}