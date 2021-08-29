// Common Anode
//
//       A
//   ---------
//   |       |
// F |       | B
//   |   G   |
//   ---------
//   |       |
// E |       | C
//   |   D   |
//   ---------
//       
// 

byte segmentA = 0b01111111;
byte segmentB = 0b10111111;
byte segmentC = 0b11011111;
byte segmentD = 0b11101111;
byte segmentE = 0b11110111;
byte segmentF = 0b11111011;
byte segmentG = 0b11111101;
byte dot      = 0b11111110;

int t = 800;

byte zero = segmentA
    & segmentB
    & segmentC
    & segmentD
    & segmentE
    & segmentF;

byte one = segmentB 
    & segmentC; 

byte two = segmentA 
    & segmentB
    & segmentG
    & segmentE
    & segmentD; 

byte three = segmentA 
    & segmentB
    & segmentG
    & segmentC
    & segmentD; 

byte four = segmentB
    & segmentG
    & segmentF
    & segmentC; 

byte five = segmentA 
    & segmentF
    & segmentG
    & segmentC
    & segmentD; 

byte six = segmentA
    & segmentG
    & segmentC
    & segmentD
    & segmentE
    & segmentF;

byte seven = segmentA
    & segmentB 
    & segmentC; 

byte eight = segmentA
    & segmentB
    & segmentC
    & segmentD
    & segmentE
    & segmentF
    & segmentG;

byte nine = segmentA
    & segmentB
    & segmentC
    & segmentD
    & segmentF
    & segmentG;


void setup() {
  DDRD = 0b11111111;
}

void loop() {
  setPortDValue(zero);
  delay(t);
  setPortDValue(one);
  delay(t);
  setPortDValue(two);
  delay(t);
  setPortDValue(three);
  delay(t);
  setPortDValue(four);
  delay(t);
  setPortDValue(five);
  delay(t);
  setPortDValue(six);
  delay(t);
  setPortDValue(seven);
  delay(t);
  setPortDValue(eight);
  delay(t);
  setPortDValue(nine);
  delay(t);
}

void setPortDValue(byte segments) {
  PORTD = segments;
}
