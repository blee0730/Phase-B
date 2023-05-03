#define LED 13

String readString;

void setup() {
  
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);

  //Serial; ESP will write stuff after events on the website
  Serial.begin(9600);

}

void loop() {

  if(Serial.available() > 0){
    readString = Serial.readStringUntil('\n');
    Serial.println(readString);
    
    /*
    if(readString == "$GET"){
      
    }
    */
    if(readString == "$STR"){

      digitalWrite(LED, HIGH);
    }
    else if(readString == "$STP"){

      digitalWrite(LED, LOW);
    }
  }

}
