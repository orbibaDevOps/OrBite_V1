

 void currentRead(){

unsigned int x=0;
float AcsValue=0.0,Samples=0.0,AvgAcs=0.0,AcsValueF=0.0;

  for (int x = 0; x < 300; x++){ 
  AcsValue = analogRead(A0);     
  Samples = Samples + AcsValue; 
  delay (3); 
}
AvgAcs=Samples/300.0;
AcsValueF = ((2.5 - (AvgAcs * (5.0 / 1024.0)) )/0.000185)-200;
Serial.println(AcsValueF);//Print the read current on Serial monitor
delay(50);
}
