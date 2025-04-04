int sound_pin = 11;

void setup() {
    pinMode(sound_pin, OUTPUT);
}

void loop() {
    tone(sound_pin, 600, 500);
    delay(500);
    noTone(sound_pin);
    delay(500);
}