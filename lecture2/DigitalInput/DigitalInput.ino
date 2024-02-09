
//A

const int LED = 10;
const int button = 8;
/*void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED, OUTPUT); //SETUP LED
  pinMode(button, INPUT_PULLUP); //Setup button, need INPUT_PULLUP otherwise pulls up the voltage across 
  //the port to the maximum for that board whenever there is no input voltage across the port, and the 
  //reading at the port decreases with increase in voltage applied across the port.
}

// the loop function runs over and over again forever
void loop() {
  if (digitalRead(button) == false){
    digitalWrite(LED, HIGH);   // turn the LED off by making the voltage LOW
    delay(100);   
  }
  else{
    digitalWrite(LED, LOW);
  }                    // wait for a second
}*/

//B inverted

//C

int state = 0;
int LEDstate = 0;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED, OUTPUT); //SETUP LED
  pinMode(button, INPUT_PULLUP);
  Serial.begin(9600); //Setup button, need INPUT_PULLUP otherwise pulls up the voltage across 
  //the port to the maximum for that board whenever there is no input voltage across the port, and the 
  //reading at the port decreases with increase in voltage applied across the port.
}


// the loop function runs over and over again forever
void loop() {
  if (state == 0 && digitalRead(button) == HIGH){ //If state nul and button pushed
    state =1; //state change
    LEDstate = !LEDstate; //ledstatus change
  }   
  if (state == 1 && digitalRead(button) == LOW){
    state = 0; state change
  }       
  digitalWrite(LED, LEDstate);      // wait for a second
}