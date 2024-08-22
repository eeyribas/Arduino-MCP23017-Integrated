# Arduino-MCP23017-Integrated
The repository contains examples of using the MCP23017 expander with Arduino. The MCP23017 expander uses I2C communication with Arduino. There are six examples in the repository related to this. These examples are:

1. ReadingToSingleMCP23017WithAdafLib: An example that allows reading from the inputs of a single MCP23017 expander using the Adafruit_MCP23017 library with Arduino.

2. ReadingToSingleMCP23017WithWireLib: An example that allows reading from the inputs of a single MCP23017 expander using the Wire library with Arduino.

3. WritingToSingleMCP23017WithAdafLib: An example that allows writing to the outputs of a single MCP23017 expander using the Adafruit_MCP23017 library with Arduino.

4. WritingToSingleMCP23017WithWireLib: An example that allows writing to the outputs of a single MCP23017 expander using the Wire library with Arduino.

5. WritingToTwoMCP23017WithAdafLib: An example that allows writing to the outputs of two MCP23017 expanders using the Adafruit_MCP23017 library with Arduino. Values are sent to the outputs based on input from the Serial Monitor.

6. WritingToTwoMCP23017WithWireLib: An example that allows writing to the outputs of two MCP23017 expanders using the Wire library with Arduino.

Arduino Used: Arduino Uno

Arduino IDE Version: 2.2.0

Arduino Library: To use the Adafruit_MCP23017 library, include the Adafruit-MCP23017-master.zip file in your Arduino IDE.

Arduino Connection Diagram: The connection diagram is shown in the (Arduino-MCP23017 I2C Comm.png) image.