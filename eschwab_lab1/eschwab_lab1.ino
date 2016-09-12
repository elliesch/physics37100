/*
  Ellianna Schwab - Advanced Lab 1 - Professor Mark Shattuck - Blinking Birthday
  This project blinks out my birthday in morse code, using sound and light.  
 */
 
//string to convert to Morse Code
char blinkingBirthday[] = "june ninth";

// Create variable to define the output pins
int led = 12;      // blink an led on output 12
int speaker = 8;      // output audio on pin 8
int note = 1000;      // sound at 1000Hz

int dotLen = 100;     // length of the morse code 'dot'
int dashLen = dotLen * 3;    // length of the morse code 'dash'
int elemPause = dotLen;  // length of the pause between elements of a character
int Spaces = dotLen * 3 - dotLen;     // length of the spaces between characters
int wordPause = dotLen * 7;  // length of the pause between words

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the pin as an output for the LED
  pinMode(led, OUTPUT); 
}

// Create a loop of the letters/words you want to output in morse code (defined in string at top of code)
void loop()
{ 
  // Loop through the string and get each character
  for (int i = 0; i < sizeof(blinkingBirthday) - 1; i++)
  {
  // identifies current character
  char tmpChar = blinkingBirthday[i];
  // Call subroutine below to convert character to morse code
  GetChar(tmpChar);
  }
  // At the end of the string long pause before looping and starting again
  LightsOff(8000);      
}

// DOT
void MorseDot()
{
  digitalWrite(led, HIGH);    // turn the LED on 
  tone(speaker, note, dotLen); // start playing speaker
  delay(dotLen);              // hold in this position
}

// DASH
void MorseDash()
{
  digitalWrite(led, HIGH);    // turn the LED on 
  tone(speaker, note, dashLen);  // start playing speaker
  delay(dashLen);               // hold in this position
}

// Turn Off
void LightsOff(int delayTime)
{
  digitalWrite(led, LOW);     // turn the LED off   
  noTone(speaker);             // stop playing speaker
  delay(delayTime);             // hold in this position
}

//converts characters in string to morse code
void GetChar(char tmpChar)
{
  // Take the passed character and use a switch case to find the morse code for that character
  switch (tmpChar) {
    case 'a': 
    MorseDot();
    LightsOff(elemPause);
    MorseDash();
    LightsOff(elemPause);
    break;
    case 'b':
    MorseDash();
    LightsOff(elemPause);
    MorseDot();
    LightsOff(elemPause);
    MorseDot();
    LightsOff(elemPause);
    MorseDot();
    LightsOff(elemPause);
    break;
    case 'c':
    MorseDash();
    LightsOff(elemPause);
    MorseDot();
    LightsOff(elemPause);
    MorseDash();
    LightsOff(elemPause);
    MorseDot();
    LightsOff(elemPause);
    break;
    case 'd':
    MorseDash();
    LightsOff(elemPause);
    MorseDot();
    LightsOff(elemPause);
    MorseDot();
    LightsOff(elemPause);
    break;
    case 'e':
    MorseDot();
    LightsOff(elemPause);
    break;
    case 'f':
    MorseDot();
    LightsOff(elemPause);
    MorseDot();
    LightsOff(elemPause);
    MorseDash();
    LightsOff(elemPause);
    MorseDot();
    LightsOff(elemPause);
    break;
    case 'g':
    MorseDash();
    LightsOff(elemPause);
    MorseDash();
    LightsOff(elemPause);
    MorseDot();
    LightsOff(elemPause);
    break;
    case 'h':
    MorseDot();
    LightsOff(elemPause);
    MorseDot();
    LightsOff(elemPause);
    MorseDot();
    LightsOff(elemPause);
    MorseDot();
    LightsOff(elemPause);
    break;
    case 'i':
    MorseDot();
    LightsOff(elemPause);
    MorseDot();
    LightsOff(elemPause);
    break;
    case 'j':
    MorseDot();
    LightsOff(elemPause);
    MorseDash();
    LightsOff(elemPause);
    MorseDash();
    LightsOff(elemPause);
    MorseDash();
    LightsOff(elemPause);
    break;
    case 'k':
    MorseDash();
    LightsOff(elemPause);
    MorseDot();
    LightsOff(elemPause);
    MorseDash();
    LightsOff(elemPause);
    break;
    case 'l':
    MorseDot();
    LightsOff(elemPause);
    MorseDash();
    LightsOff(elemPause);
    MorseDot();
    LightsOff(elemPause);
    MorseDot();
    LightsOff(elemPause);
    break;
    case 'm':
    MorseDash();
    LightsOff(elemPause);
    MorseDash();
    LightsOff(elemPause);
    break;
    case 'n':
    MorseDash();
    LightsOff(elemPause);
    MorseDot();
    LightsOff(elemPause);
    break;
    case 'o':
    MorseDash();
    LightsOff(elemPause);
    MorseDash();
    LightsOff(elemPause);
    MorseDash();
    LightsOff(elemPause);
    break;
    case 'p':
    MorseDot();
    LightsOff(elemPause);
    MorseDash();
    LightsOff(elemPause);
    MorseDash();
    LightsOff(elemPause);
    MorseDot();
    LightsOff(elemPause);
    break;
    case 'q':
    MorseDash();
    LightsOff(elemPause);
    MorseDash();
    LightsOff(elemPause);
    MorseDot();
    LightsOff(elemPause);
    MorseDash();
    LightsOff(elemPause);
    break;
    case 'r':
    MorseDot();
    LightsOff(elemPause);
    MorseDash();
    LightsOff(elemPause);
    MorseDot();
    LightsOff(elemPause);
    break;
    case 's':
    MorseDot();
    LightsOff(elemPause);
    MorseDot();
    LightsOff(elemPause);
    MorseDot();
    LightsOff(elemPause);
    break;
    case 't':
    MorseDash();
    LightsOff(elemPause);
    break;
    case 'u':
    MorseDot();
    LightsOff(elemPause);
    MorseDot();
    LightsOff(elemPause);
    MorseDash();
    LightsOff(elemPause);
    break;
    case 'v':
    MorseDot();
    LightsOff(elemPause);
    MorseDot();
    LightsOff(elemPause);
    MorseDot();
    LightsOff(elemPause);
    MorseDash();
    LightsOff(elemPause);
    break;
    case 'w':
    MorseDot();
    LightsOff(elemPause);
    MorseDash();
    LightsOff(elemPause);
    MorseDash();
    LightsOff(elemPause);
    break;
    case 'x':
    MorseDash();
    LightsOff(elemPause);
    MorseDot();
    LightsOff(elemPause);
    MorseDot();
    LightsOff(elemPause);
    MorseDash();
    LightsOff(elemPause);
    break;
    case 'y':
    MorseDash();
    LightsOff(elemPause);
    MorseDot();
    LightsOff(elemPause);
    MorseDash();
    LightsOff(elemPause);
    MorseDash();
    LightsOff(elemPause);
    break;
    case 'z':
    MorseDash();
    LightsOff(elemPause);
    MorseDash();
    LightsOff(elemPause);
    MorseDot();
    LightsOff(elemPause);
    MorseDot();
    LightsOff(elemPause);
    break;
    default: 
    // If a matching character not found, defaults to a blank space
    LightsOff(Spaces);      
  }
}
