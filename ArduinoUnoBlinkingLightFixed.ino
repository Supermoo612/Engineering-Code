int switchState = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);  //yellow
 pinMode(12, OUTPUT);  //green
 pinMode(11, OUTPUT);  //green
 pinMode(10, INPUT);  //button
}

void loop() {
 switchState= digitalRead(10); //read current through 10
    if (switchState==LOW) {
    digitalWrite(13, HIGH);
   digitalWrite(12, LOW);
   digitalWrite(11, LOW);
  } //lights, camera, action

  else { // switchState==HIGH
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  delay(250); //quarter second (ping on good day)
digitalWrite (12, HIGH);
digitalWrite(11,LOW);
delay(500);//wait 500ms (my ping)
  }
}
