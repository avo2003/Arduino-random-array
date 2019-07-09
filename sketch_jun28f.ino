void setup(){
  Serial.begin(9600);
 } 
 void loop(){
  int array[10];
        for(int i = 0; i< 10;i++){
          array[i] = random(50);
          Serial.println(array[i]);
          delay(100);
          }
          
     }
