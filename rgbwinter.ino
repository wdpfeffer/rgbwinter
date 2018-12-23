/*

Use old bootloader
 
 
*/

int redPin = 6;     // Red RGB pin -> D3
int greenPin = 5;   // Green RGB pin -> D5
int bluePin = 3;    // Blue RGB pin -> D6

int treeBlueCount = 0;
int treeRedCount = 0;
int treeGreenCount = 0;
int smBlueCount = 255;
int smRedCount = 255;
int smGreenCount = 255;


void setup() {
  pinMode(redPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
  pinMode(greenPin, OUTPUT);
  
}

void loop() {
  // Reads the current position of the potentiometer and converts 
  // to a value between 0 and 255 to control the according RGB pin with PWM
  // RGB LED COMMON ANODE
  
  // write the snowman routine first
  if (smRedCount >=244) && (smBlueCount >= 255) && (smGreenCount ==255){
    
  }
  
  analogWrite(redPin,255-random(0,255));
  analogWrite(greenPin,255-random(0,255));
  analogWrite(bluePin,255-random(0,255));


  delay(1000);
}
