#include <SoftwareSerial.h>
#define rxPin 12
#define txPin 13

SoftwareSerial sim800(rxPin, txPin);
int Switch_pin = A1;
int switch_value;
int prev_switch_value;
int button;

void setup() {

  Serial.begin(115200);
  sim800.begin(115200);
  sim800.println("AT");
  pinMode(Switch_pin, INPUT);
  prev_switch_value = analogRead(Switch_pin);
}

void loop() {
  switch_value = analogRead(Switch_pin);

  if ((switch_value > (prev_switch_value + 20)) || (switch_value < (prev_switch_value - 20)))
    delay(20);
  switch_value = analogRead(Switch_pin);

  if ((switch_value > (prev_switch_value + 20)) || (switch_value < (prev_switch_value - 20))) {

    if (switch_value < 100) {
      Serial.println("----UP BUTTON IS PRESSED----");
      SendMessage1();
    }

    else if ((switch_value > 400) && (switch_value < 600)) {
      Serial.println("----LEFT BUTTON IS PRESSED----");
      SendMessage2();
    }

    else if ((switch_value > 600) && (switch_value < 725)) {
      Serial.println("----CENTRE BUTTON IS PRESSED");
      SendMessage3();
    }

    else if ((switch_value > 725) && (switch_value < 790)) {
      Serial.println("----RIGHT BUTTON IS PRESSED");
      SendMessage4();
    }

    else if ((switch_value > 790) && (switch_value < 850)) {
      Serial.println("----DOWN BUTTON IS PRESSED----");
      SendMessage5();
    }

    else if (switch_value > 900)
      Serial.println("----BUTTON IS RELEASED----");
    prev_switch_value = switch_value;
  }
}

void SendMessage1() {
  Serial.println("UP");
  sim800.println("AT+CMGF=1");
  delay(1000);
  sim800.println("AT+CMGS=\"+9189287608xx\"\r");
  delay(1000);
  sim800.println("UP BUTTON IS PRESSED");
  delay(100);
  sim800.println((char)26);
  delay(1000);
}

void SendMessage2() {
  Serial.println("LEFT");
  sim800.println("AT+CMGF=1");
  delay(1000);
  sim800.println("AT+CMGS=\"+9189287608xx\"\r");
  delay(1000);
  sim800.println("LEFT BUTTON IS PRESSED");
  delay(100);
  sim800.println((char)26);
  delay(1000);
}

void SendMessage3() {
  Serial.println("CENTRE");
  sim800.println("AT+CMGF=1");
  delay(1000);
  sim800.println("AT+CMGS=\"+9189287608xx\"\r");
  delay(1000);
  sim800.println("CENTRE BUTTON IS PRESSED");
  delay(100);
  sim800.println((char)26);
  delay(1000);
}

void SendMessage4() {
  Serial.println("RIGHT");
  sim800.println("AT+CMGF=1");
  delay(1000);
  sim800.println("AT+CMGS=\"+9189287608xx\"\r");
  delay(1000);
  sim800.println("RIGHT BUTTON IS PRESSED");
  delay(100);
  sim800.println((char)26);
  delay(1000);
}

void SendMessage5() {
  Serial.println("DOWN");
  sim800.println("AT+CMGF=1");
  delay(1000);
  sim800.println("AT+CMGS=\"+9189287608xx\"\r");
  delay(1000);
  sim800.println("DOWN BUTTON IS PRESSED");
  delay(100);
  sim800.println((char)26);
  delay(1000);
}