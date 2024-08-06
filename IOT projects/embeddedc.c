intuv=6;
int led=10;
void setup()
{
  pinMode(uv,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop()

{
  uv=digitalRead(uv);
  if(uv==1)
  {
    digitalWrite(led,HIGH);
    Serial.println("light's on");
    delay(2000);
   
  }
  else
  {
    digitalWrite(led,LOW);
    Serial.println("light's off");
    delay(2000);
  }

}
