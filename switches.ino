int switch_1 = 7;
int switch_2 = 8;
int light = 13;
bool light_state = 0;
bool switch_1_state = digitalRead(switch_1);
bool switch_2_state = digitalRead(switch_2);

void setup() 
{
  Serial.begin(9600);
  pinMode(switch_1, INPUT_PULLUP);
  pinMode(switch_2, INPUT_PULLUP);
  pinMode(light, OUTPUT);
}

void loop() 
{
  Serial.write(switch_2_state);
  if(digitalRead(switch_1) != switch_1_state)
  {
    switch_1_state = !switch_1_state;
    light_state = !light_state;
    digitalWrite(light, light_state);
  }
  else if(digitalRead(switch_2) != switch_2_state)
  {
    switch_2_state = !switch_2_state;
    light_state = !light_state;
    digitalWrite(light, light_state);
  }
  else;
  delay(100);
}
