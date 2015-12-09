 
int a=10;
int b=5;
int c;
void setup() {
         Serial.begin(9600);     
}

void loop() {

         
         if (Serial.available() > 0) {
                 
                int c = a + b;
                while(1);

                 Serial.println(c);
         }
                 
                 }
  


