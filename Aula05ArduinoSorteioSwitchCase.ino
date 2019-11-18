void setup() {
  Serial.begin(9600);
}

void loop() {
  int sala=random(1,4);
  delay(2000);
  switch(sala){
    case 1:
      Serial.println("Sala 01");
    break;
    case 2:
      Serial.println("Sala 02");
    break;
    case 3:
      Serial.println("Sala 03");
    break;
  }

}
