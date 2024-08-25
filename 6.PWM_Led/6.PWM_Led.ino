int led_pin = 11;
int led_value = 0;
void setup() {
  pinMode(led_pin, OUTPUT);
}

void loop() {
  for (led_value = 0; led_value <= 255; led_value = led_value + 10) {
    analogWrite(led_pin, led_value);
    delay(100);
  }
  delay(1000);

  for (led_value = 250; led_value >= 0; led_value = led_value - 10) {
    analogWrite(led_pin, led_value);
    delay(100);
  }
  delay(1000);
}


// 10k POT With LED

/*
int led_pin = 9; 
int pot_pin = A6; 
int pot_value;                    
int led_value;                        
void setup()
{
  pinMode(led_pin,OUTPUT);             
  pinMode(pot_pin,INPUT);               
}

void loop() 
{
  pot_value = analogRead(pot_pin);                		
  led_value = map(pot_value, 0, 1023, 0, 255);   
  analogWrite(led_pin,led_value);  
  delay(100); 
}