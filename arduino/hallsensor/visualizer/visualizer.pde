import processing.serial.*;

Serial myPort;
String inString;
Integer blockSize = 300;

void setup() {  
  myPort = new Serial(this, "/dev/ttyACM0", 9600);
  myPort.bufferUntil(43);
  size(650, 950);
}

void draw() {
  Integer myColor;
  clear();
   background(255, 255,255);
  String normalized = inString.replace("+", "").replace("-", "").trim();
  String[] cols = split(normalized, "|");
  for(int i=0; i < cols.length; i++) {
    String[] rows = split(cols[i], ",");
    for(int k=0; k < rows.length; k++) {
      try {
        myColor = Integer.parseInt(rows[k])-512;
         Float mColor = map(myColor, 0, 1023, 0, 255);
          fill(mColor, 0, 0);
        //myColor = Integer.parseInt(rows[k])-509;
        //if(myColor < 0) {
        //  Float mColor = map(myColor, 0, 509, 0, 255);
        //  fill(0, 0, mColor);
        //} else {
        //  Float mColor = map(myColor, 0, 1023-509, 0, 255);
        //  fill(myColor, 0, 0);
        //}
        rect(blockSize*i+10, blockSize*k+10, blockSize, blockSize);
      } catch(Exception e) {
      }
    }
  }
}


void serialEvent(Serial p) {
  inString = p.readString();
}