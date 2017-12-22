
// We are using pin mode 13 as output and set it to low (OFF) on startup so when we detect a face we will get the command, Y which will trigger the led to glow
  
void setup()
{
  pinMode(13,OUTPUT);
  digitalWrite(13,LOW);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.read() == 'N')
  {
    digitalWrite(13,LOW);  
  } 

  if(Serial.read() == 'Y')
  { 
    digitalWrite(13,HIGH); 
}  
 }
