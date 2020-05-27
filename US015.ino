

void US015(){
    unsigned long Time_Echo_us = 0;
    int safe_d = 20;
    int len;
    int i = 0;
    int x = 0;
//   unsigned long Len_mm  = 0;
    digitalWrite(TrigPin, HIGH);              //begin to send a high pulse, then US-015 begin to measure the distance
    delayMicroseconds(20);                    //set this high pulse width as 20us (>10us)
    digitalWrite(TrigPin, LOW);               //end this high pulse
    
    Time_Echo_us = pulseIn(EchoPin, HIGH);               //calculate the pulse width at EchoPin, 
    if((Time_Echo_us < 60000) && (Time_Echo_us > 1))     //a valid pulse width should be between (1, 60000).
    {
      Len_mm = (Time_Echo_us*34/100)/2;      //calculate the distance by pulse width, Len_mm = (Time_Echo_us * 0.34mm/us) / 2 (mm)
//      Serial.print("Present Distance is: ");  //output result to Serial monitor
//      Serial.print(Len_mm, DEC);            //output result to Serial monitor
//      Serial.println("mm");                 //output result to Serial monitor
      len = int(Len_mm);
    if((len < safe_d) && (i <= 3))
    {
      i = i + 1;    
    }else if((len < safe_d) && (i > 3)){
      x = 1;                                     // Someone or something is around the arm 
    }else{
      x = 0; 
    }
    }
    delay(1000);   
}
