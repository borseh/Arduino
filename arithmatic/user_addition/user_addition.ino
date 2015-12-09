int a;
int b;
int c;
void setup() {
         Serial.begin(9600);     
}

void loop()
{
               Serial.println("Enter 1st no:");
               while(Serial.available()==0)
               {
               }
         
                a=Serial.parseInt();
               Serial.println(a) ;
     delay(1500);         
               Serial.println("Enter 2nd no:");
                 while(Serial.available()==0)
                 {
                 }
              b=Serial.parseInt();
              Serial.println(b);
               c=a+b;
             Serial.println("Addition:");
                 Serial.println(c);
         
                 
                 }
  
