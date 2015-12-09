int num,i;
int d=200;
void setup()
{
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  
}

void loop()
{
  
  
                Serial.println("Enter how many times led blink:");
               while(Serial.available()==0)
               {
               }
         
                num=Serial.parseInt();
 

                 for(i=0;i<=num;i++)
                 {
                   digitalWrite(13,HIGH);
                   delay(d);
                   digitalWrite(13,LOW);
                   delay(d);
                 }
 }


