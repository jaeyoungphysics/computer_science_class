#define LED1 8
#define LED2 11

char buf;
char buf1;
char set_flag=0;
int  chk =0;
 
void setup() {
  Serial.begin(115200);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
}
 
void loop() {   
  if(Serial.available()) {
    buf = Serial.read();
    set_flag = 1;
    buf1 = buf, 
    buf = '\0';
  }
  if(set_flag ==1){
    if(buf1 == '1') Serial.print("1 \t"); 
    else if(buf1 == '2') Serial.print("2 \t"); 
    else if(buf1 == '3') Serial.print("3 \t"); 
    else Serial.print("4 \t"); 
    if(buf1 == '1') digitalWrite(LED1, HIGH);
    else if(buf1 =='2') digitalWrite(LED1, LOW);
    else if(buf1 =='3') digitalWrite(LED2, HIGH);
    else digitalWrite(LED2, LOW);
    set_flag =0;
  }
}

