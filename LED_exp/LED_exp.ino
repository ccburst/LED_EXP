int once=0; /*正緣觸發*/
int now=0;  /*當前亮暗*/

void setup() {
  pinMode(13,INPUT);
  pinMode(12,OUTPUT);
  digitalWrite(12,now);
}

void loop() {
  if(digitalRead(13)==1){
    if(once==0){
      now=!now;
      digitalWrite(12,now);
      once=1;  /*使一次長時按壓僅改變一次亮暗*/
    }
  }
  else{
    once=0;  /*放開按鈕時重設once*/
  }
}
