#include "Adafruit_MCP23017.h"

#define ADDR 0

Adafruit_MCP23017 mcp;

void setup() 
{
  Serial.begin(9600);

  mcp.begin(ADDR);
  mcp.pinMode(0, INPUT);
  mcp.pinMode(1, INPUT);
  mcp.pinMode(2, INPUT);
  mcp.pinMode(3, INPUT);
  mcp.pinMode(4, INPUT);
  mcp.pinMode(5, INPUT);
  mcp.pinMode(6, INPUT);
  mcp.pinMode(7, INPUT);
}

void loop() 
{
  int value = 0;
  for (int i = 0; i < 8; i++) {
    value = mcp.digitalRead(i);
    Serial.print("Value[");
    Serial.print(i);
    Serial.print("]=");
    Serial.println(value);
    delay(10);
  }

  Serial.println();
  delay(2000);
}