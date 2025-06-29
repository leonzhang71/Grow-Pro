int sensorPin = A5; // select the input pin for the potentiometer
int motorPin = 10; // select the input pin for the potentiometer, set up 1 for now 
int ledPin = 9; // select the pin for the LED
int sensorValue = 0; // variable to store the value coming from the sensor
int waterLvl = 0;
int basicDrylevel = 120; 
int fullWaterlevel = 500;
int percentWaterLevel = 0;


void setup() {
  pinMode(motorPin, OUTPUT); //set the pin mode for motor
  digitalWrite(motorPin, HIGH); //turn of the motor first
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  
  //light sensor
  sensorValue = analogRead(sensorPin);
  
  //water sensor
  waterLvl = analogRead(A0);
  //compare the dry level and water level, and change the soil mositure level into the percent 
  percentWaterLevel = map(waterLvl, fullWaterlevel, basicDrylevel, 100, 0);
  //test percent!
  Serial.print(percentWaterLevel);
  Serial.println("%"); 

  if (percentWaterLevel < 60){
    Serial.print("The plant does need water! Level of soil mositure: ");
    Serial.print(percentWaterLevel);
    Serial.println("%");
    //motor on
    digitalWrite(motorPin, LOW);
    //check
    Serial.println("Motor on");
    
  }
  else{
    Serial.print("The plant doesn't needs water. The current level of soil mositure: ");
    Serial.print(percentWaterLevel);
    Serial.println("%");
    //motor off
    digitalWrite(motorPin, HIGH);
    //check
    Serial.println("Motor off");
  }
  
  //if (waterLvl > 500) {
  //Serial.println("Very heavy Rain");
  //}
  
  //else if ((waterLvl > 300) && (waterLvl <= 500)) {
  //Serial.println("AVERAGE Rain");
  //}
  
  //else{
  //Serial.println("Dry Weather");
  //Serial.println(waterLvl,DEC);
  //}
  
  digitalWrite(ledPin, HIGH);
  delay(sensorValue);
  digitalWrite(ledPin, LOW);
  
  delay(sensorValue); 
  Serial.println(sensorValue, DEC);
}
