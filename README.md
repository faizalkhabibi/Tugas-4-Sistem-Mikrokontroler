# Simulasi Traffic Light 4 Sisi (Arduino)

Proyek ini adalah simulasi sistem lampu lalu lintas empat simpang (Utara, Timur, Selatan, Barat) yang dikontrol menggunakan Arduino Uno. Rangkaian ini didesain dan disimulasikan menggunakan platform Tinkercad.

## Fitur Sistem
* **Sistem Otomatis (Looping):** Berjalan terus-menerus secara berulang.
* **Rotasi Searah Jarum Jam:** Urutan penyalaan lampu hijau adalah Utara → Timur → Selatan → Barat.
* **Kondisi Default:** Semua simpang berada dalam kondisi MERAH sebelum salah satu sisi diaktifkan.
* **Durasi Lampu:**
  * **Hijau:** Menyala konstan selama 5 detik.
  * **Kuning:** Diberikan efek kedip 3 kali, dilanjutkan menyala konstan selama 2 detik.
  * **Merah:** Menyala mengunci simpang saat simpang lain sedang aktif.
* **Modular Code:** Kode dipisahkan menggunakan fungsi `aktifkanSimpang()` agar lebih bersih dan terstruktur.
* **Safety Rule:** Sistem dikunci agar tidak ada lebih dari satu simpang yang menyala hijau di waktu bersamaan.

## Komponen
* 1x Arduino Uno R3
* 1x Breadboard
* 4x LED Merah
* 4x LED Kuning
* 4x LED Hijau
* 12x Resistor 220 $\Omega$
* Kabel Jumper secukupnya

## Pemetaan Pin (Wiring)
Semua katoda (kaki pendek) LED dihubungkan ke jalur Ground (GND) pada Arduino. Kaki anoda (kaki panjang) dihubungkan ke pin digital berikut melalui resistor:

| Simpang | LED Merah | LED Kuning | LED Hijau |
| :--- | :---: | :---: | :---: |
| **Utara** | Pin 2 | Pin 3 | Pin 4 |
| **Timur** | Pin 5 | Pin 6 | Pin 7 |
| **Selatan** | Pin 8 | Pin 9 | Pin 10 |
| **Barat** | Pin 11 | Pin 12 | Pin 13 |

## Cara Menjalankan Simulasi
1. Clone atau unduh repository ini.
2. Buka platform [Tinkercad Circuits](https://www.tinkercad.com/circuits).
3. Rangkai komponen sesuai dengan tabel pemetaan pin di atas.
4. Salin seluruh kode C++ yang ada di file utama ke dalam editor kode Tinkercad (pastikan memilih mode **Text**).
5. Klik **Start Simulation** untuk melihat hasilnya.

## Author
* **Muhammad Faizal Khabibi** (NIM: H1H024003)
