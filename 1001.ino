/* A sample program for reading temperature & humidity values using DHT Sensors */


#include &quot;DHT.h&quot;
#define DHTPIN 2 // Digital pin connected to the DHT sensor
//#define DHTTYPE DHT11 // DHT 11
#define DHTTYPE DHT22 // DHT 22 (AM2302), AM2321
//#define DHTTYPE DHT21 // DHT 21 (AM2301)
// as the current DHT reading algorithm adjusts itself to work on faster procs.
DHT dht(DHTPIN, DHTTYPE);
void setup() {
Serial.begin(9600);
Serial.println(F(&quot;DHTxx test!&quot;));
dht.begin();
}
void loop() {
// Wait a few seconds between measurements.
delay(2000);
// Reading temperature or humidity takes about 250 milliseconds!
// Sensor readings may also be up to 2 seconds &#39;old&#39; (its a very slow sensor)
float h = dht.readHumidity();
// Read temperature as Celsius (the default)
float t = dht.readTemperature();
// Read temperature as Fahrenheit (isFahrenheit = true)
float f = dht.readTemperature(true);

// Check if any reads failed and exit early (to try again).
if (isnan(h) || isnan(t) || isnan(f)) {
Serial.println(F(&quot;Failed to read from DHT sensor!&quot;));
return;

}

// Compute heat index in Fahrenheit (the default)
float hif = dht.computeHeatIndex(f, h);
// Compute heat index in Celsius (isFahreheit = false)
float hic = dht.computeHeatIndex(t, h, false);

Serial.print(F(&quot;Humidity: &quot;));
Serial.print(h);
Serial.print(F(&quot;% Temperature: &quot;));
Serial.print(t);
Serial.print(F(&quot;°C &quot;));
Serial.print(f);
Serial.print(F(&quot;°F Heat index: &quot;));
Serial.print(hic);
Serial.print(F(&quot;°C &quot;));
Serial.print(hif);
Serial.println(F(&quot;°F&quot;));
}