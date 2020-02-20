// Reads a value
#define ENCODER_CLK 2

// Indicates clockwise or counterclockwise
#define ENCODER_DT 3

double newAngle;
double currAngle;
bool clockwise;

void setup() {
  Serial.begin(9600);
  pinMode(ENCODER_CLK, INPUT);
  pinMode(ENCODER_DT, INPUT);
}

void loop() {
//  newAngle = digitalRead(ENCODER_CLK);
//  if (newAngle != currAngle) {
//    
//  }
  
  Serial.print(currAngle);
}
