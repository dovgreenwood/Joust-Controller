
void setup() {
  pinMode(4, INPUT); //button
  pinMode(8, INPUT); //right
  pinMode(12, INPUT); //left
  Keyboard.begin();
}

void loop() {
  if(digitalRead(8))
    Keyboard.write('d');
  if(digitalRead(12))
    Keyboard.write('a');
  if(digitalRead(4))
    Keyboard.write('l');
  delayMicroseconds(1000);
}
