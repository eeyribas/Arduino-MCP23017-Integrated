#include "Adafruit_MCP23017.h"

#define ADDR 0

Adafruit_MCP23017 mcp;

void setup() 
{
  mcp.begin(ADDR);
  mcp.pinMode(0, OUTPUT);
  mcp.pinMode(1, OUTPUT);
  mcp.pinMode(6, OUTPUT);
  mcp.pinMode(7, OUTPUT);
  mcp.pinMode(9, OUTPUT);
  mcp.pinMode(8, OUTPUT);
  mcp.pinMode(14, OUTPUT);
  mcp.pinMode(15, OUTPUT);
}

void loop() 
{
  mcp.digitalWrite(0, HIGH);
  mcp.digitalWrite(1, HIGH);
  mcp.digitalWrite(6, HIGH);
  mcp.digitalWrite(7, HIGH);
  mcp.digitalWrite(8, HIGH);
  mcp.digitalWrite(9, HIGH);
  mcp.digitalWrite(14, HIGH);
  mcp.digitalWrite(15, HIGH);
  delay(5000);

  mcp.digitalWrite(0, LOW);
  mcp.digitalWrite(1, LOW);
  mcp.digitalWrite(6, LOW);
  mcp.digitalWrite(7, LOW);
  mcp.digitalWrite(8, LOW);
  mcp.digitalWrite(9, LOW);
  mcp.digitalWrite(14, LOW);
  mcp.digitalWrite(15, LOW);
  delay(5000);
}