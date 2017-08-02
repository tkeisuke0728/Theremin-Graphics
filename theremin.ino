int cds = 0;
int iPin = A0;


void setup() {
  Serial.begin(9600);
}

void loop() {
  cds = analogRead(iPin);
  cds = map(cds,0,1024,0,255);
  Serial.println(cds);

}
