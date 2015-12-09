

void setup() {                
  
  pinMode(10, OUTPUT);     
  pinMode(11, OUTPUT); 
  pinMode(12, OUTPUT); 
  pinMode(13, OUTPUT); 
}

void loop() {
    
  digitalWrite(10, HIGH);   
   digitalWrite(13, HIGH);  
   
   
  digitalWrite(11, HIGH);

digitalWrite(12, HIGH);
 delay(100);
 digitalWrite(11, LOW);

 
  digitalWrite(12, LOW);    
  delay(100);
    
        
      
  digitalWrite(10, LOW);   
  digitalWrite(13, LOW); 
  
  
  digitalWrite(11, HIGH);

digitalWrite(12, HIGH);
 delay(100);
 digitalWrite(11, LOW);

 
  digitalWrite(12, LOW);    
  delay(100);
    
 
  
  
  
  
}
