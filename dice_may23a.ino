// Binary Dice
// www.rjconcepcion.com

// Variable declaration
int const d1 = 2;
int const d2 = 4;
int const d3 = 6;
int const btn = 12;

// aleatory number variable
int number = 0; 

void setup() {
  Serial.begin(9600);

  pinMode(d1, OUTPUT);
  pinMode(d2, OUTPUT);
  pinMode(d3, OUTPUT);
  pinMode(btn, INPUT_PULLUP); // Set input with pullup resistor

  randomSeed(analogRead(0)); // Inicialize random number generator

}

void loop() {
  Serial.begin(9600);
  
  // Start with all leds on.
  digitalWrite(d1, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, HIGH);
  
  
  // Read buttom state
  if (digitalRead(btn) == LOW) {
    delay(20);

    if (digitalRead(btn) == LOW) {
      number = random(7);         // Generate a random number between 0 and 6.
    }
  }

  // Switch case structure allows to take an action depends number value. Every case represent a binary number using leds.
  switch (number) {
    case 0:
      break;

    case 1:
      digitalWrite(d1, HIGH);
      digitalWrite(d2, LOW);
      digitalWrite(d3, LOW);
      Serial.println("1");
      delay(5000);
      break;

    case 2:
      digitalWrite(d1, LOW);
      digitalWrite(d2, HIGH);
      digitalWrite(d3, LOW);
      Serial.println("2");
      delay(5000);
      break;

    case 3:
      digitalWrite(d1, HIGH);
      digitalWrite(d2, HIGH);
      digitalWrite(d3, LOW);
      Serial.println("3");
      delay(5000);
      break;

    case 4:
      digitalWrite(d1, LOW);
      digitalWrite(d2, LOW);
      digitalWrite(d3, HIGH);
      Serial.println("4");
      delay(5000);
      break;

    case 5:
      digitalWrite(d1, HIGH);
      digitalWrite(d2, LOW);
      digitalWrite(d3, HIGH);
      Serial.println("5");
      delay(5000);
      break;

    case 6:
      digitalWrite(d1, LOW);
      digitalWrite(d2, HIGH);
      digitalWrite(d3, HIGH);
      Serial.println("6");
      delay(5000);
      break;

    default:
      break;
    
  }

  number = 0; 

  delay(250);
  digitalWrite(d1, LOW);
  digitalWrite(d2, LOW);
  digitalWrite(d3, LOW);
  delay(250);

}
