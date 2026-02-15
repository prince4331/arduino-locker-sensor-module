const int IR_PIN = 3;   // IR sensor OUT connected to D3

void setup() {
  pinMode(IR_PIN, INPUT);  
  Serial.begin(9600);
}

void loop() {
  int sensorValue = digitalRead(IR_PIN);  // read sensor (0 or 1)
  Serial.println(sensorValue);            // print to Serial Monitor
  delay(200);  // small delay for readability
}
