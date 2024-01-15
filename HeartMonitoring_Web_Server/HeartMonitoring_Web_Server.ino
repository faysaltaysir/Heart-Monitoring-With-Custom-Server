// Import required libraries
#ifdef ESP32
  #include <WiFi.h>
  #include <ESPAsyncWebServer.h>
  #include <SPIFFS.h>
#else
  #include <Arduino.h>
  #include <ESP8266WiFi.h>
  #include <Hash.h>
  #include <ESPAsyncTCP.h>
  #include <ESPAsyncWebServer.h>
  #include <FS.h>
#endif
#include <Wire.h>

// Replace with your network credentials
const char* ssid = "DREM";      
const char* password = "44571948";
#define Li_1Pin 12
#define Li_2Pin 13

// Create AsyncWebServer object on port 80
AsyncWebServer server(80);

String readHeart() {
    int t = 0;
    if(digitalRead(Li_1Pin)==1 || digitalRead(Li_2Pin)==1){
      Serial.println('!');
    }
    else{
      t = analogRead(A0);  //vp pin
    }
    Serial.println(t);
    return String(t);
}

void setup(){
  // Serial port for debugging purposes
  Serial.begin(115200);
  

  // Initialize SPIFFS
  if(!SPIFFS.begin()){
    Serial.println("An Error has occurred while mounting SPIFFS");
    return;
  }

  // Connect to Wi-Fi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi..");
  }

  // Print ESP32 Local IP Address
  Serial.println(WiFi.localIP());

  // Route for root / web page
  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send(SPIFFS, "/index.html");
  });
  server.on("/temperature", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/plain", readHeart().c_str());
  });
  

  // Start server
  server.begin();
}
 
void loop(){
  
}
