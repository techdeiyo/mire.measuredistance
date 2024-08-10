// Define pins for the HC-SR04
const int trigPin = 9;
const int echoPin = 10;

void setup() {
  // Set the trigPin as output and echoPin as input
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  // Initialize serial communication for debugging
  Serial.begin(9600);

}

void loop() {
  // Clear the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Trigger the sensor by setting the trigPin high for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the echoPin, which returns the duration in microseconds
  long duration = pulseIn(echoPin, HIGH);

  // Calculate the distance in centimeters
  // Speed of sound in air is approximately 343 meters per second
  // Dividing by 2 since the sound travels to the obstacle and back
  long distance = duration * 0.034 / 2;

  // Print the distance to the serial monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Wait for a short period before measuring again
  delay(1000);
}
