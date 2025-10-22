
int lightPin = 13; 
String receivedData = "";

void setup() {
  pinMode(lightPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    receivedData = Serial.readStringUntil('\n');
    receivedData.trim();

    if (receivedData == "ON") {
      digitalWrite(lightPin, HIGH);
    } else if (receivedData == "OFF") {
      digitalWrite(lightPin, LOW);
    }
  }
}
