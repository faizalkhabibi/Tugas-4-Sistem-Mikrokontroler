# Simulasi Traffic Light 4 Sisi (Arduino Uno)

Proyek ini merupakan simulasi sistem kendali lampu lalu lintas untuk empat persimpangan (Utara, Timur, Selatan, dan Barat). Sistem ini dirancang untuk bekerja secara otomatis dengan urutan searah jarum jam menggunakan papan pengembang Arduino Uno.

## 🚀 Fitur Utama
* **Otomatisasi Penuh:** Sistem berjalan terus-menerus dalam siklus perulangan (looping).
* **Urutan Searah Jarum Jam:** Fase hijau berpindah dari Utara → Timur → Selatan → Barat.
* **Keamanan Sistem:** Kondisi default semua merah sebelum siklus dimulai, memastikan tidak ada dua sisi yang hijau bersamaan.
* **Manajemen Waktu Terukur:**
  * **Lampu Hijau:** Aktif selama 5 detik.
  * **Lampu Kuning:** Efek kedip 3 kali sebagai peringatan, dilanjutkan nyala statis 2 detik.
  * **Lampu Merah:** Mengunci jalur segera setelah fase kuning selesai.
* **Kode Modular:** Menggunakan fungsi `aktifkanSimpang()` untuk efisiensi dan kemudahan modifikasi.

## 🛠️ Komponen & Rangkaian
Proyek ini dirancang **tanpa menggunakan breadboard** (koneksi langsung/point-to-point) untuk menyederhanakan fisik rangkaian.

* **Kontroler:** 1x Arduino Uno R3
* **Output:** 12x LED (4 Merah, 4 Kuning, 4 Hijau)
* **Proteksi:** 12x Resistor 220 $\Omega$
* **Koneksi:** Kabel jumper langsung dari Pin Digital ke Anoda LED, dan seluruh Katoda ke Ground (GND).

## 📌 Pemetaan Pin
| Sisi Persimpangan | Merah | Kuning | Hijau |
| :--- | :---: | :---: | :---: |
| **Utara** | Pin 2 | Pin 3 | Pin 4 |
| **Timur** | Pin 5 | Pin 6 | Pin 7 |
| **Selatan** | Pin 8 | Pin 9 | Pin 10 |
| **Barat** | Pin 11 | Pin 12 | Pin 13 |

## 📂 Tautan Proyek
Silakan akses dokumen pendukung proyek melalui tautan di bawah ini:

* **[Dokumentasi Laporan Proyek](https://drive.google.com/drive/folders/1pSC0NpsPdqnAISGQC3gtcf5hGjItNTsn?usp=sharing)** 
* **[Simulasi Tinkercad](https://www.tinkercad.com/things/3dykEFx1dJe-tugas-4-sistem-mikrokontroler?sharecode=jpDS7q5yNyMZMf3m1gsSMSkO01bO0jVxLTmZGCBZfzU)**


---
**Disusun Oleh:**
**Muhammad Faizal Khabibi** NIM: H1H024003
