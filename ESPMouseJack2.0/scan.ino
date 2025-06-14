#include <SPI.h>
#include <Wire.h>
#include <RF24.h>

#define CE_PIN   5
#define CSN_PIN  4
RF24 radio(CE_PIN, CSN_PIN);  // Define the RF24 object for NRF24L01

void setup() {
  Serial.begin(115200);
  radio.begin();
  radio.setPALevel(RF24_PA_HIGH);
  radio.setChannel(76);  // Ensure this is the same channel the mouse uses
  radio.openReadingPipe(1, 0xF0F0F0F0E1LL);  // Listening pipe for receiving mouse signals
  radio.startListening();  // Start listening for data from the mouse
}

void loop() {
  if (radio.available()) {
    char data[32] = "";  // Buffer to store received data
    radio.read(&data, sizeof(data));
    
    Serial.print("Received: ");
    Serial.println(data);  // Display the received data (you can analyze the mouse data here)
  }
}
