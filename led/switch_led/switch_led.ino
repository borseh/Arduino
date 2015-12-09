
int ch=0;
int d;
void setup() {
  Serial.begin(9600); 
  Serial.println("1.forward");
  Serial.println("2.Reverse");
  //Serial.println("3.led blink");


  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);


}

void loop()
{   
  Serial.print("Enter your choice:"); 
  while(Serial.available()==0)


    ch=Serial.parseInt();

  switch (ch) {
  case '1':
    Serial.println("1.forward");
    d=100;
    for( int i=10;i < 14;i++)
    {
      digitalWrite(i,HIGH);
      delay(d);
      digitalWrite(i,LOW);
      delay(d);
    }
    break;    
  case '2': 
    Serial.println("2.Reverse");
    d=100;
    for( int i=13;i > 10;i--)
    {
      digitalWrite(i,HIGH);
      delay(d);
      digitalWrite(i,LOW);
      delay(d);
    }
    break;

  default:
    Serial.println("Led blink");  

    digitalWrite(13,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(10,HIGH);
    delay(500);

    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
    digitalWrite(10,LOW);
    delay(500);
    break;
  }
}          


