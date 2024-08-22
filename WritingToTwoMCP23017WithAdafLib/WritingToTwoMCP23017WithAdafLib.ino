#include "Adafruit_MCP23017.h"

#define ADDR_1 0
#define ADDR_2 1

Adafruit_MCP23017 mcp_1;
Adafruit_MCP23017 mcp_2;

void setup() 
{
  Serial.begin(9600);

  mcp_1.begin(ADDR_1);
  mcp_1.pinMode(0, OUTPUT);
  mcp_1.pinMode(1, OUTPUT);
  mcp_1.pinMode(2, OUTPUT);
  mcp_1.pinMode(8, OUTPUT);
  mcp_1.pinMode(9, OUTPUT);
  mcp_1.pinMode(10, OUTPUT);

  mcp_2.begin(ADDR_2);
  mcp_2.pinMode(0, OUTPUT);
  mcp_2.pinMode(1, OUTPUT);
  mcp_2.pinMode(2, OUTPUT);
  mcp_2.pinMode(8, OUTPUT);
  mcp_2.pinMode(9, OUTPUT);
  mcp_2.pinMode(10, OUTPUT);
}

void loop() 
{
  if (Serial.available()) {
    int value = Serial.parseInt();

    if (value == 101) {
      mcp_1.digitalWrite(0, HIGH);
      mcp_1.digitalWrite(1, LOW);
      mcp_1.digitalWrite(2, LOW);
    } else if (value == 102) {
      mcp_1.digitalWrite(0, LOW);
      mcp_1.digitalWrite(1, HIGH);
      mcp_1.digitalWrite(2, LOW);
    } else if (value == 111) {
      mcp_1.digitalWrite(8, HIGH);
      mcp_1.digitalWrite(9, LOW);
      mcp_1.digitalWrite(10, LOW);
    } else if (value == 112) {
      mcp_1.digitalWrite(8, LOW);
      mcp_1.digitalWrite(9, HIGH);
      mcp_1.digitalWrite(10, LOW);
    } else if (value == 121) {
      mcp_2.digitalWrite(0, HIGH);
      mcp_2.digitalWrite(1, LOW);
      mcp_2.digitalWrite(2, LOW);
    } else if (value == 122) {
      mcp_2.digitalWrite(0, LOW);
      mcp_2.digitalWrite(1, HIGH);
      mcp_2.digitalWrite(2, LOW);
    } else if (value == 131) {
      mcp_2.digitalWrite(8, HIGH);
      mcp_2.digitalWrite(9, LOW);
      mcp_2.digitalWrite(10, LOW);
    } else if (value == 132) {
      mcp_2.digitalWrite(8, LOW);
      mcp_2.digitalWrite(9, HIGH);
      mcp_2.digitalWrite(10, LOW);
    }
  }
}