
int x = 0;
void setup() {
  pinMode(LED_BUILTIN,  OUTPUT);
 
  while (x <= 19){
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
    x = x + 1;
  }
}

void loop(){
   
}
