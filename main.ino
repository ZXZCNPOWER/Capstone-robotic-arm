
//This will be used for the main control
unsigned int EchoPin = 2;           // connect Pin 2(Arduino digital io) to Echo at US-015
unsigned int TrigPin = 3;           // connect Pin 3(Arduino digital io) to Trig at US-015
unsigned long Len_mm  = 0;


void setup() {
  
    Serial.begin(9600);                        //Serial: output result to Serial monitor
    pinMode(EchoPin, INPUT);                    //Set EchoPin as input, to receive measure result from US-015
    pinMode(TrigPin, OUTPUT);                   //Set TrigPin as output, used to send high pusle to trig measurement (>10us)

}

void loop() {
  US015();
  Serial.print("Present Distance is: ");  //output result to Serial monitor
//  Serial.print(Len_mm, DEC);            //output result to Serial monitor



}
