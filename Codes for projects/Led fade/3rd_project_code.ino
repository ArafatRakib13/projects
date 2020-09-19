
int i;
int led=9;
void setup() {
pinMode(led,OUTPUT);  
}

void loop() {
  for(i=0;i<=255;i+=5)
  {
    analogWrite(led,i);
    delay(250);
  }
    for(i=255;i>=0;i-=5)
  {
    analogWrite(led,i);
    delay(250);
  }
}
