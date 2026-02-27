// U1A5 - 2 sensores - Telemetría CSV (t_ms,s1,s2) @50Hz
const int PIN_S1 = A0;
const int PIN_S2 = A1;

const unsigned long TS_MS = 20; // 50 Hz
unsigned long last_ms = 0;

void setup() {
  Serial.begin(115200);
  delay(300);
  Serial.println("t_ms,s1,s2"); // encabezado (Node-RED lo puede ignorar)
}

void loop() {
  unsigned long now = millis();
  if (now - last_ms >= TS_MS) {
    last_ms = now;
    int s1 = analogRead(PIN_S1);
    int s2 = analogRead(PIN_S2);

    Serial.print(now);
    Serial.print(",");
    Serial.print(s1);
    Serial.print(",");
    Serial.println(s2);
  }
}