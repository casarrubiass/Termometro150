float v = 0.0;
float T= 0.0;

void setup() {
  pinMode(A0,INPUT);
  Serial.begin (9600);
}

void loop() {
  v=analogRead(A0);
  T=float((v*150/1023))+0.73;
  Serial.print ("La temperatura actual es: ");
  Serial.print(T);
  Serial.println("C");
  delay(1000);
}
