int pir = 2;
int led = 3;
int buz = 4;

void setup() {
  pinMode (pir, INPUT);
  pinMode (led,OUTPUT);
  pinMode (buz,OUTPUT);
  Serial.begin (9600);
}

void loop() {
  if (digitalRead(pir)== HIGH){
    digitalWrite (led, HIGH);
    digitalWrite (buz,HIGH);
    Serial.println ("¡Intrusos!");
  }else {
  
    digitalWrite (led, LOW);
    digitalWrite (buz,LOW);
  
  }
}
