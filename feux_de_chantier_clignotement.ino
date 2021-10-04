

#define ledRg1 2
#define ledVrt1 3
#define ledRg2 4
#define ledvrt2 8

const word blinkDelay = 250;
const word betweenBlinksDelay = 2000;

void setup() {
  pinMode(ledRg1, OUTPUT);
  pinMode(ledVrt1, OUTPUT);
  pinMode(ledRg2, OUTPUT);
  pinMode(ledvrt2, OUTPUT);
  digitalWrite(ledRg1, HIGH);
  digitalWrite(ledVrt1, LOW);
  digitalWrite(ledRg2, HIGH);
  digitalWrite(ledvrt2, LOW);
  delay(2000);
  Serial.begin(115200);
}

void loop() {
  delay(betweenBlinksDelay);
  cycleRight();
  delay(betweenBlinksDelay);
  cycleLeft();
}

void cycleRight() {
  digitalWrite(ledRg1, LOW);
  for (int i = 0; i < 10; i++) {
    digitalWrite(ledVrt1, HIGH);
    delay(blinkDelay);                      
    digitalWrite(ledVrt1, LOW);
    delay(blinkDelay);                      
  }
  digitalWrite(ledRg1, HIGH);
}

void cycleLeft() {
  digitalWrite(ledRg2, LOW);
  for (int i = 0; i < 10; i++) {
    digitalWrite(ledvrt2, HIGH);
    delay(blinkDelay);                      
    digitalWrite(ledvrt2, LOW);
    delay(blinkDelay);                       
  }
  digitalWrite(ledRg2, HIGH);
}
