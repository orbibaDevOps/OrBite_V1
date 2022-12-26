int motor_in_1 = 3;
int motor_in_2 = 4;
int motor_en = 2;

void setup() {
  Serial.begin(9600); //Start Serial Monitor to display current read value on Serial monitor
  pinMode(motor_in_1, OUTPUT);
  pinMode(motor_in_2, OUTPUT);
  pinMode(motor_en, OUTPUT);
  
}

void loop() {
  
  digitalWrite(motor_in_1, HIGH);
  digitalWrite(motor_in_2, LOW);
  analogWrite(motor_en, 255);
  currentRead();
  analogWrite(motor_en, 0);
  delay(200);
  
  }
