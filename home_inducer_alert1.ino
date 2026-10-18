const int pirPin = 11;
const int ledPin = 13;
const int buzzerPin = 12;

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);

  digitalWrite(ledPin, LOW);
  digitalWrite(buzzerPin, LOW);

  Serial.begin(9600);
}

void loop() {
  int motion = digitalRead(pirPin);

  if (motion == HIGH) {
    Serial.println("Motion Detected!");

    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);

    delay(1000);

    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);

    delay(500);
  } else {
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);
  }
}