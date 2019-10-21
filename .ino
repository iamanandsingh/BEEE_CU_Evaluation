int lamp = 7;
void setup()
{
Serial.begin(9600);
  pinMode(lamp, OUTPUT);
  pinMode(13,OUTPUT);
}

void loop()
{
int c = analogRead(A0);
  delay(500);
  if(c<300)
  {
  digitalWrite(lamp,HIGH);
    delay(1000);
  }
  
else
{ 
  digitalWrite(lamp,LOW);

 digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000); 
}

}
