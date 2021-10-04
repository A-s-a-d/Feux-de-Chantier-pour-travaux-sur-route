#define LedRg  2
#define LedVrt 1
#define LedRg1 3
#define LedVrt1 4

void setup() {
    pinMode(LedRg,OUTPUT);
    pinMode(LedVrt,OUTPUT);
    pinMode(LedRg1,OUTPUT);
    pinMode(LedVrt1,OUTPUT); 

}

void loop() {
digitalWrite(LedRg,HIGH);
digitalWrite(LedVrt,LOW);
digitalWrite(LedRg1,HIGH);
digitalWrite(LedVrt1,LOW);    // DEUX LEDS ROUGE ALLUMEE ET LES VERTS EITENTS PENDANT 2S
delay(2000); 
digitalWrite(LedRg,LOW);
digitalWrite(LedVrt,HIGH);
digitalWrite(LedRg1,HIGH);
digitalWrite(LedVrt1,LOW);    // AUTOMOBILISTS DE SENS 1 PASSENT PENDANT 5S
delay(5000); 
digitalWrite(LedRg,HIGH);
digitalWrite(LedVrt,LOW);
digitalWrite(LedRg1,HIGH);
digitalWrite(LedVrt1,LOW);    // DEUX LEDS ROUGE ALLUMEE ET LES VERTS EITENTS PENDANT 2S
delay(2000); 
digitalWrite(LedRg,HIGH);
digitalWrite(LedVrt,LOW);
digitalWrite(LedRg1,LOW);
digitalWrite(LedVrt1,HIGH);   // AUTOMOBILISTES DE SENS 2 PASSENT PENDANT 5S
delay(5000); 
digitalWrite(LedRg,HIGH);
digitalWrite(LedVrt,LOW);
digitalWrite(LedRg1,HIGH);    // DEUX LEDS ROUGE ALLUMEE ET LES VERTS EITENTS
digitalWrite(LedVrt1,LOW);
}
