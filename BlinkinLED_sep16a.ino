const int pinButton = 2;   // Button pin
const int pinLED = 13;     // LED pin

void setup() {

  pinMode(pinButton, INPUT_PULLUP);
  
 
  pinMode(pinLED, OUTPUT);
}

void loop() {
  // We read button state
  int stateButton = digitalRead(pinButton);

  // Logic: If button is down turn off the LED.
  // In other state the diode lights up.
  if (stateButton == LOW) {
    digitalWrite(pinLED, HIGH);  // Diode does't light up
  } else {
    digitalWrite(pinLED, LOW); // Diode lights up
  }
}