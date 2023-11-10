#include <DHT.h>
#include "U8glib.h"  //Download Library

U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_NONE | U8G_I2C_OPT_DEV_0);
#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void drawMoistureLevel(int moistureValue) {
  u8g.setFont(u8g_font_unifont);
  u8g.firstPage();
  do {
    u8g.drawStr(0, 20, "Soil Moisture");
    u8g.drawStr(0, 40, "Level: ");
    u8g.setPrintPos(64, 40);
    u8g.print(moistureValue);
  } while (u8g.nextPage());
}


void setup() {
  Serial.begin(9600);
  pinMode(7, OUTPUT);

  dht.begin();
  u8g.firstPage();
  do {
    drawMoistureLevel(0);
  } while (u8g.nextPage());
}
void drawDHT11SensorData(int tempValue, int humValue) {
  u8g.setFont(u8g_font_unifont);
  u8g.firstPage();
  do {
    u8g.drawStr(0, 20, "Temperature:");
    u8g.setPrintPos(95, 20);
    u8g.print(tempValue);
    u8g.print("C");

    u8g.drawStr(0, 40, "Humidity:");
    u8g.setPrintPos(70, 40);
    u8g.print(humValue);
    u8g.print("%");
  } while (u8g.nextPage());
}


void loop() {
  delay(1000);
  int sensorValue = analogRead(A0);

  Serial.print("Soil Moisture: ");
  Serial.println(sensorValue);

  if (sensorValue < 300){
    digitalWrite(7, LOW);
  }else{
    digitalWrite(7,HIGH);
  }

  float h = dht.readHumidity();
  float t = dht.readTemperature();
  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }
  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print("%\t");
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.println("°C");
  // Update the OLED display with the current moisture level
  drawMoistureLevel(sensorValue);
  delay(1000);
  drawDHT11SensorData(t,h);

}
