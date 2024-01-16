#include <SPI.h>
#include <Ethernet.h>

byte mac[] = { 0x00, 0xAA, 0xBB, 0xCC, 0xDE, 0x02 };
IPAddress ip(192, 168, 1, 10); // Set your desired static IP address

void setup() {
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }

  // Start the Ethernet connection with a static IP address:
  Serial.println("Initialize Ethernet with a static IP address:");
  Ethernet.begin(mac, ip);

  // Print your static IP address:
  Serial.print("My IP address: ");
  Serial.println(Ethernet.localIP());
}

void loop() {
  // Your loop code here
  // Add your main code logic in the loop function
}
