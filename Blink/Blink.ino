void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

//  digitalWrite(13, HIGH);
//  delay(900000);



//  delay(90000000000);
  
  int blinkDelay = 400;
  int slowBlink = 200;
  int fastBlink = 130;

  delay(blinkDelay);

  digitalWrite(13, HIGH);
  delay(slowBlink);
  digitalWrite(13, LOW);
  delay(slowBlink);
  digitalWrite(13, HIGH);
  delay(slowBlink);
  digitalWrite(13, LOW);
  delay(slowBlink);
  digitalWrite(13, HIGH);
  delay(slowBlink);
  digitalWrite(13, LOW);
  delay(slowBlink);

  delay(blinkDelay);

  digitalWrite(13, HIGH);
  delay(fastBlink);
  digitalWrite(13, LOW);
  delay(fastBlink);
  digitalWrite(13, HIGH);
  delay(fastBlink);
  digitalWrite(13, LOW);
  delay(fastBlink);
  digitalWrite(13, HIGH);
  delay(fastBlink);
  digitalWrite(13, LOW);
  delay(fastBlink);

  delay(blinkDelay);

  digitalWrite(13, HIGH);
  delay(slowBlink);
  digitalWrite(13, LOW);
  delay(slowBlink);
  digitalWrite(13, HIGH);
  delay(slowBlink);
  digitalWrite(13, LOW);
  delay(slowBlink);
  digitalWrite(13, HIGH);
  delay(slowBlink);
  digitalWrite(13, LOW);

  delay(blinkDelay);
}
