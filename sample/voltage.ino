int d=1000;
int g=0;

void setup()
{
  Serial.begin(9600);
  
}

void loop()
{
  float val=analogRead(A0);
 
   
    if(val != g)
    {
  Serial.println((val*5.0)/1024.0);
     g = val;
    }
    //val1=val;
   delay(d);
}
