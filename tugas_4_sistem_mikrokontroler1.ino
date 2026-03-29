// Pin konfigurasi
int merah1 = 2, kuning1 = 3, hijau1 = 4;
int merah2 = 5, kuning2 = 6, hijau2 = 7;
int merah3 = 8, kuning3 = 9, hijau3 = 10;
int merah4 = 11, kuning4 = 12, hijau4 = 13;

void setup() {
  for (int i = 2; i <= 13; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // JALUR 1 HIJAU (Jalur 2,3,4 MERAH)
  aturLampu(LOW, LOW, HIGH, HIGH, LOW, LOW, HIGH, LOW, LOW, HIGH, LOW, LOW);
  delay(5000);
  // JALUR 1 KUNING
  aturLampu(LOW, HIGH, LOW, HIGH, LOW, LOW, HIGH, LOW, LOW, HIGH, LOW, LOW);
  delay(2000);

  // JALUR 2 HIJAU (Jalur 1,3,4 MERAH)
  aturLampu(HIGH, LOW, LOW, LOW, LOW, HIGH, HIGH, LOW, LOW, HIGH, LOW, LOW);
  delay(5000);
  // JALUR 2 KUNING
  aturLampu(HIGH, LOW, LOW, LOW, HIGH, LOW, HIGH, LOW, LOW, HIGH, LOW, LOW);
  delay(2000);

  // JALUR 3 HIJAU (Jalur 1,2,4 MERAH)
  aturLampu(HIGH, LOW, LOW, HIGH, LOW, LOW, LOW, LOW, HIGH, HIGH, LOW, LOW);
  delay(5000);
  // JALUR 3 KUNING
  aturLampu(HIGH, LOW, LOW, HIGH, LOW, LOW, LOW, HIGH, LOW, HIGH, LOW, LOW);
  delay(2000);

  // JALUR 4 HIJAU (Jalur 1,2,3 MERAH)
  aturLampu(HIGH, LOW, LOW, HIGH, LOW, LOW, HIGH, LOW, LOW, LOW, LOW, HIGH);
  delay(5000);
  // JALUR 4 KUNING
  aturLampu(HIGH, LOW, LOW, HIGH, LOW, LOW, HIGH, LOW, LOW, LOW, HIGH, LOW);
  delay(2000);
}

// Fungsi pembantu agar kode rapi (mengatur semua 12 pin sekaligus)
void aturLampu(int m1, int k1, int h1, int m2, int k2, int h2, int m3, int k3, int h3, int m4, int k4, int h4) {
  digitalWrite(merah1, m1); digitalWrite(kuning1, k1); digitalWrite(hijau1, h1);
  digitalWrite(merah2, m2); digitalWrite(kuning2, k2); digitalWrite(hijau2, h2);
  digitalWrite(merah3, m3); digitalWrite(kuning3, k3); digitalWrite(hijau3, h3);
  digitalWrite(merah4, m4); digitalWrite(kuning4, k4); digitalWrite(hijau4, h4);
}