int d=100;

void setup()
{
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  
  
}
void loop()
{
  for( int i=10;i < 14;i++)
    {
  digitalWrite(i,HIGH);
  delay(d);
  digitalWrite(i,LOW);
  delay(d);
    }
    
  
 for( int i=13;i > 10;i--)
    {
  digitalWrite(i,HIGH);
  delay(d);
  digitalWrite(i,LOW);
  delay(d);
    }



}
