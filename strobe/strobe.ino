void setup(){
  
}

void loop(){
  unsigned int data = 0;

  data = analogRead(A0);

  analogWrite(3, data/4);
}
