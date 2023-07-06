int firepin = 7;
int buzzerpin = 6;

void setup() {
  Serial.begin(9600);
  pinMode(firepin,INPUT);
  pinMode(buzzerpin,OUTPUT);
 

}

void loop() {
 int fireval = digitalRead(firepin);
 Serial.println(fireval);
 delay(1000);

 if(fireval==0)
 {
  digitalWrite(buzzerpin,HIGH);
  delay(5000);
 }
 else
{
  digitalWrite(buzzerpin,LOW);
  delay(5000);
}

}
