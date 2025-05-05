int pirPin = 2;
int ledMerah = 9;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledMerah, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int pirValue = digitalRead(pirPin);
Serial.print("Value : ");
Serial.println(pirValue);
delay(200);

if(pirValue == 1){
  Serial.println("Terdeteksi Pergerakan");
  digitalWrite(ledMerah, HIGH);
  delay(200);
}else{
  digitalWrite(ledMerah, LOW);
}

}