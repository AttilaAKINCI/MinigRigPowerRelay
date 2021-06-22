#define RELAY_TRIGGER  6 
#define PSU_INPUT      14    

bool pcTriggered = false;
int val = 0;

void setup(){    
  Serial.begin(9600);
  pinMode(RELAY_TRIGGER, OUTPUT);     
  pinMode(PSU_INPUT, INPUT);  
  digitalWrite(RELAY_TRIGGER,HIGH);     

  // 10 min initial delay...
  delay(10000);
}

void loop(){
  // We have main power
  // check PSU 5V output. 
  val = analogRead(PSU_INPUT);
  if(val < 1000){
    // PSU offline.
    if(!pcTriggered){
      // if PSU doesnt provide 5V, and Minig rig isnt started before,
      // trigger power switch relay. 
      pcTriggered =  true;
      digitalWrite(RELAY_TRIGGER,LOW);      
      delay(500);                  
      digitalWrite(RELAY_TRIGGER,HIGH);
      delay(20000);    
    }else{
      // We have power but for unknown reason minig rig goes offline(PSU stops).
      // quick power losses.
      pcTriggered = false;
    }
  } 

  // PSU online. Wait and check PSU 5V output again for each 30 mins.
  delay(30000);       
}

 
