char ch;

void setup() {
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  Serial.begin(9600);
  
  // put your setup code here, to run once:

}
void loop()
{
  if(Serial.available()>0)
  {
     ch=Serial.read();
  }
  if(ch=='1')
  {
    digitalWrite(13,HIGH);
  }
   if(ch=='2')
  {
    digitalWrite(13,LOW);
  }
   if(ch=='3')
  {
    digitalWrite(12,HIGH);
  }
  if(ch=='4')
  {
    digitalWrite(12,LOW);
  }
}
  
  
  



  
  // put your main code here, to run repeatedly:
