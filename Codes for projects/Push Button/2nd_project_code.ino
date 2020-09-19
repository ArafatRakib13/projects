
int value;
int led=13;
int pushbutton=2;
void setup()  
{
  pinMode(led,OUTPUT);
  pinMode(pushbutton,INPUT);
}

void loop()
{ 
   
    value=digitalRead(pushbutton);
    if(value==HIGH)
     {
       digitalWrite(led,HIGH);
      }
    
    else
    {
      digitalWrite(led,LOW);
    }
}
