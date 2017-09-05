/*
 * Arduino oscillator w/ CV/Gate
 * A fundamental building block of a synthesizer.
 * 2017 - David Mays
 */

#define BAUD_RATE 9600  //Baud rate for serial coms

#define S_TRIGGER 5   //Define pin for high to low gate (D5)
#define V_TRIGGER 6   //Define pin for low to high gate (D6)
#define CV_LED    13   //Define pin for LED out upon gate trigger
#define CV_IN     14  //Define pin for CV input (A0)

bool s_trigger_state;
bool v_trigger_state;

int CV_value = 0;

//Simply reads the state of the trigger inputs
void check_gate_state(){
  s_trigger_state = digitalRead(S_TRIGGER);
  v_trigger_state = digitalRead(V_TRIGGER);
}

//Reads the CV input and converts the value to a voltage
void readCV(){
  
}

void trigger_note(){
  
}



void setup() {
  //Initialize serial
  Serial.begin(BAUD_RATE);
  
  //Initialize hardware pins
  pinMode(S_TRIGGER, INPUT);
  pinMode(V_TRIGGER, INPUT);
  pinMode(CV_LED, OUTPUT);

}

void loop() {
  check_gate_state();
  if(s_trigger_state == true){
    trigger_note();
  }
  if(v_trigger_state == true){
    trigger_note();
  }
  else; //don't do anything

}
