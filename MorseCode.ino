  const int buttonpin = 3;
  
  void setup() {
    pinMode(LED_BUILTIN,OUTPUT);
    pinMode(buttonpin,INPUT_PULLUP);
  }
  
  void loop() {
  
    if (digitalRead(buttonpin) == LOW)
    {
      MorseCode();
      delay(1000);
    }
  }

  void MorseCode() {
      //A
      Dot(); Dash();
      delay(600);
  
      //K
      Dash(); Dot(); Dash();
      delay(600);
  
      //S
      Dot(); Dot(); Dot();
      delay(600);
  
      //H
      Dot(); Dot(); Dot(); Dot();
      delay(600);
  
      //I
      Dot(); Dot();
      delay(600);
  
      //T
      Dash();
      delay(3000);
  }
  
  void Dot() {
    digitalWrite(LED_BUILTIN,HIGH);
    delay(200);
    digitalWrite(LED_BUILTIN,LOW);
    delay(200);
  }
  
  void Dash() {
    digitalWrite(LED_BUILTIN,HIGH);
    delay(600);
    digitalWrite(LED_BUILTIN,LOW);
    delay(200);
  }
