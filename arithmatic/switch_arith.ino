int a;
int b;
int c;
int ch=0;
void setup() {
         Serial.begin(9600); 
     Serial.println("1.Addition");
 Serial.println("2.subtraction");
Serial.println("3.Multiplication");
Serial.println("4.Division");
     
}

void loop()
{   
  Serial.print("Enter your choice:"); 
  while(Serial.available()==0)
               {
               }
  ch=Serial.parseInt();
  
  switch (ch) {
  case 1:
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
         
                 
                 
              break;
  case 2:  
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
               c=a-b;
             Serial.println("Subtraction:");
                 Serial.println(c);
         
                 
              break;
    break;
  case 3:  
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
             c=a*b;
             Serial.println("Multiplication:");
                 Serial.println(c);
                 
              break;

             break;
  case 4:   
  
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
                c=a/b;
             Serial.println("Division:");
                 Serial.println(c);
                 
              break;
    dlay(1);
  }
  
  
  
  
              
                 
                 
