const int in1 = 4;
const int in2 = 5;
const int in3 = 6;
const int in4 = 7;

void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    char btn = Serial.read();

    switch (btn) {
      case 'F':
        digitalWrite(in1, LOW);
        digitalWrite(in2, HIGH);
        digitalWrite(in3, HIGH);
        digitalWrite(in4, LOW);
        break;

      case 'f':
        stop();
        break;

      case 'B':
        digitalWrite(in1, HIGH);
        digitalWrite(in2, LOW);
        digitalWrite(in3, LOW);
        digitalWrite(in4, HIGH);
        break;

      case 'b':
        stop();
        break;

      case 'L':
        digitalWrite(in1, HIGH);
        digitalWrite(in2, LOW);
        digitalWrite(in3, HIGH);
        digitalWrite(in4, LOW);
        break;

      case 'l':
        stop();
        break;

      case 'R':
        digitalWrite(in1, LOW);
        digitalWrite(in2, HIGH);
        digitalWrite(in3, LOW);
        digitalWrite(in4, HIGH);
        break;

      case 'r':
        stop();
        break;

      default:
        stop();
        break;
    }
  }
}
void stop() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}