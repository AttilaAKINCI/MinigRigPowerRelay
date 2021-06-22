#define RELAY_TRIGGER  6 
#define PSU_INPUT      14    

bool pcTriggered = false;
int val = 0;

void setup(){    
  Serial.begin(9600);
  pinMode(RELAY_TRIGGER, OUTPUT);     
  pinMode(PSU_INPUT, INPUT);  
  digitalWrite(RELAY_TRIGGER,HIGH);     

  // 10 sn initial delay...
  delay(10000);
}

void loop(){
  // if PSU provide 5V output. 
  val = analogRead(PSU_INPUT);
  if(val < 1000){
    if(!pcTriggered){
      //PSU provides 5V and previously PC didnt triggered.
      pcTriggered =  true;
      digitalWrite(RELAY_TRIGGER,LOW);      
      delay(500);                  
      digitalWrite(RELAY_TRIGGER,HIGH);
      delay(20000);    
    }else{
      pcTriggered = false;
    }
  } 

  delay(30000);       
}

 
