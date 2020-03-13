int once=0; /*正緣觸發*/
int now=0;  /*當前亮暗*/
void setup() {
  pinMode(13,INPUT);
  pinMode(12,OUTPUT);
  digitalWrite(12,LOW);
}

void loop() {
  if(digitalRead(13)==HIGH){
    if(once==0&&now==0){
      digitalWrite(12,HIGH);
      now=1;
    }
    else if(once==0&&now==1){
      digitalWrite(12,LOW);
      now=0;
    }
    once=1;  /*使一次長時按壓僅改變一次亮暗*/
  }
  else{
    once=0;  /*放開按鈕時重設once*/
  }
}
