const long baud = 9600; // Set to 9600

const short invalidPin = 1; // read invalid signal
const short invalidOut = 2; // connect LED here
int valid;

int i = 0;
String storedData = " ";
String hello = "Hello World!";
//---------------------------------------------------------------------------------
// Receiver test - use AD2 Waveform Generator to generate transmit data
//---------------------------------------------------------------------------------

void setup() {
  Serial.begin(baud, SERIAL_8N1);
  // open serial port for transmit -- 8 bit word, 50 baud rate
  // connect RS-232 transmitter pin to D0
}

void loop() {
  // determine if serial data received -- if so, print them
//  if (Serial.available()) {
//    Serial.print("Available data:");
//    Serial.println(Serial.read());
//    Serial.println();
//  }
//    Serial.println("Hello World!");
    Serial.write("Hello World!");
  
    delay(1000);
    if(Serial.available()){
      while(Serial.available())
      {
      char inChar = Serial.read();
      storedData += inChar;
    }
    Serial.print("I converted: ");
    Serial.println(storedData);
    delay(1000);
    }
}
