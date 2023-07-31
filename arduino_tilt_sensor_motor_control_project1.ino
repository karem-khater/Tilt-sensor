void setup()
{
  pinMode(3,OUTPUT);pinMode(2,INPUT);
}

void loop()
{
  if(digitalRead(2)==1){digitalWrite(3,1);}
  else{digitalWrite(3,0);}
}