#include <SPI.h>
#include <Wire.h>
#include <RF24.h>

#define CE_PIN   5
#define CSN_PIN  4
RF24 radio(CE_PIN, CSN_PIN);  // Define the RF24 object for NRF24L01

uint64_t pipe = 0xF0F0F0F0E1LL;  // Receiver address (change if necessary)

void setup() {
  Serial.begin(115200);
  radio.begin();
  radio.setPALevel(RF24_PA_HIGH);
  radio.setChannel(76);
  radio.openWritingPipe(pipe);  // Set the address for the receiver
  radio.stopListening();  // Stop listening, we are sending data
}

void loop() {
  // These could be triggered by HTTP GET requests via the web dashboard
  radio.write("move_left", sizeof("move_left"));
  delay(500);
  radio.write("move_right", sizeof("move_right"));
  delay(500);
  radio.write("click_left", sizeof("click_left"));
  delay(500);
}
