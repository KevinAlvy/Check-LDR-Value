byte ldr = A2;
int nilai;

void setup() {
  pinMode (ldr, INPUT);
  Serial.begin(9600);  
}

void loop() {
  nilai = analogRead(ldr);
  Serial.print("Nilai LDR: ");
  Serial.println(nilai);
}
