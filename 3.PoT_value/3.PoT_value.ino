int pot_pin = A0;
int pot_value;

void setup() {
  pinMode(pot_pin, INPUT);
  Serial.begin(9600);
}

void loop() {
  pot_value = analogRead(pot_pin);
  Serial.println(pot_value);
  delay(1000);
}