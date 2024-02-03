int pin = 8;

void setup() {
  pinMode(pin, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  char data = Serial.read();
  if (data != -1) {
    switch (data) {
      case 'z':
        digitalWrite(pin, HIGH);
        delay(500);
        digitalWrite(pin, LOW);
        delay(500);
        break;
      case 'x':
        digitalWrite(pin, LOW);
        break;
    }
  }
}