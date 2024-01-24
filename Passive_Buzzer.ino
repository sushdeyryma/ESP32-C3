const int buzzerPin = 2;  // Digital pin for buzzer signal

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  playMelody();
  delay(2000);  // Delay between melodies
}

void playMelody() {
  // Define frequency and duration for a simple melody
  int melody[] = {262, 294, 330, 349, 392, 440, 494, 523};
  int duration = 200;

  for (int i = 0; i < 8; i++) {
    tone(buzzerPin, melody[i], duration);
    delay(duration + 50);  // Add a small delay between tones
  }

  noTone(buzzerPin);  // Turn off the buzzer after playing the melody
}