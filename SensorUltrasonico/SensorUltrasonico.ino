// Código Sensor Ultrassônico com esp32
// Autor: Murilo

int ledVermelho = 19;
int ledVerde = 18;

int trigPin = 23;
int echoPin = 22;

void setup() {

  Serial.begin(115200);

  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  int distancia;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  unsigned long tempoSom = pulseIn(echoPin, HIGH);
  distancia = tempoSom / 58;

  Serial.println("Distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");

  if (distancia > 15) {
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledVermelho, LOW);
  } else {
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledVermelho, HIGH);
  }

  delay(1000);
}
