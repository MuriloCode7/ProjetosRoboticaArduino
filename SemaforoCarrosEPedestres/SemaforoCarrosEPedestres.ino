// Código Semáforo de carros e pedestres com leds no arduino UNO
// Autor: Murilo

void setup() {
  pinMode(2, OUTPUT); // LED VERDE CARROS
  pinMode(3, OUTPUT); // LED AMARELO CARROS
  pinMode(4, OUTPUT); // LED VERMELHO CARROS

  pinMode(5, OUTPUT); // LED VERDE PEDESTRES
  pinMode(6, OUTPUT); // LED VERMELHO PEDESTRES
  
}

void loop() {  
  //Carros seguindo e pedestres parados
  digitalWrite(2, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(2000);
  
  //Carros parando e pedestres parados
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay(2000);
  
  //Carros parados e pedestres seguindo
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  delay(2000);

  

  

}