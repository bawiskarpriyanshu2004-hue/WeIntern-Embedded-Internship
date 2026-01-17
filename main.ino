#define LED_RED 18
#define LED_YELLOW 19
#define LED_GREEN 21

void setup() {
  Serial.begin(115200);
  Serial.println("System Initialized...");
  
  // Setting GPIO pins as Output
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
}

void loop() {
  // Red LED Cycle
  digitalWrite(LED_RED, HIGH);
  Serial.println("RED LED is ON");
  delay(1000); 
  digitalWrite(LED_RED, LOW);

  // Yellow LED Cycle
  digitalWrite(LED_YELLOW, HIGH);
  Serial.println("YELLOW LED is ON");
  delay(1000);
  digitalWrite(LED_YELLOW, LOW);

  // Green LED Cycle
  digitalWrite(LED_GREEN, HIGH);
  Serial.println("GREEN LED is ON");
  delay(1000);
  digitalWrite(LED_GREEN, LOW);
}
