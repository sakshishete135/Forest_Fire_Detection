
 #define SENSOR_PIN 2
 #define BUZZER_PIN 3


void setup(){
  Serial.begin(9600);
  pinMode(SENSOR_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(A0, INPUT);
  

}
void loop(){
  int sensorValue1 = analogRead(A0);
  Serial.println(sensorValue1);
  delay(1000);
  int sensorValue = digitalRead(SENSOR_PIN);
  Serial.println(sensorValue);
  if (sensorValue == LOW)
  {
    analogWrite(BUZZER_PIN, 100);
  }
  else
  {
    analogWrite(BUZZER_PIN, 0);
  }
  
  
}  



