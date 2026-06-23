const int pingPin = 9;

const int ENA = 5;   // PWM Pin
const int IN1 = 6;
const int IN2 = 7;

long duration;
int distance;

void setup() {
  Serial.begin(9600);

  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  // Motor Forward Direction
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
}

void loop() {

  // PING))) Sensor
  pinMode(pingPin, OUTPUT);
  digitalWrite(pingPin, LOW);
  delayMicroseconds(2);

  digitalWrite(pingPin, HIGH);
  delayMicroseconds(5);

  digitalWrite(pingPin, LOW);

  pinMode(pingPin, INPUT);
  duration = pulseIn(pingPin, HIGH);

  distance = duration / 29 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance > 20) {
    analogWrite(ENA, 180);
    Serial.println("Motor Running");
  }
  else {
    analogWrite(ENA, 0);
    Serial.println("Motor Stopped");
  }

  delay(200);
}