void setup() {
  Serial.begin(9600);
}

void loop() {
  // Main loop of the program:
  for (float i = 0; i < 2 * PI; i += 0.1) {
    float sinValue = sin(i); // Calculate sine value
    float cosValue = cos(i); // Calculate cosine value

    // Send sine and cosine values to Serial Plotter with labels
    Serial.print("sin:");
    Serial.print(sinValue);
    Serial.print(",cos:");
    Serial.println(cosValue);
    Serial.println(0);

    // Introduce a delay for smoother plotting
    delay(50);
  }
}
