int notes[] = {300,400,500,600};

void setup(){
  Serial.begin(9600);
  }

void loop(){
  int keyVal = analogRead(A0);
  Serial.println(keyVal);
  if(keyVal >=1015 && keyVal <=1023){
      tone(8, notes[0]);
   } 
   else if(keyVal >=950 && keyVal <=1010){
      tone(8,notes[1]);
   }  
      else if(keyVal >=800 && keyVal <=870){
      tone(8,notes[2]);
   }  
      else if(keyVal >=2 && keyVal <=10){
      tone(8,notes[3]);
   }  
   else {
      noTone(8);
    }
  } 
