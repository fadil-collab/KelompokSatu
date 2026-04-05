#include <stdio.h>

// Deklarasi Fungsi (Supaya main() tahu fungsi ini ada)
void konversiSuhu() { printf("\nFitur belum dibuat oleh Anggota 1.\n"); }
void konversiJarak();  // Akan diisi detailnya di bawah
void konversiBerat() { printf("\nFitur belum dibuat oleh Anggota 3.\n"); }
void konversiWaktu() { printf("\nFitur belum dibuat oleh Anggota 4.\n"); }

// --- BAGIAN Anggota 2 ---
void konversiJarak() {
    float km;
    printf("\n--- Konversi Jarak ---\n");
    printf("Masukkan jarak dalam Kilometer: ");
    scanf("%f", &km);
    printf("Meter: %.2f m\n", km * 1000);
    printf("Centimeter: %.2f cm\n", km * 100000);
} // 

<<<<<<< HEAD
<<<<<<< HEAD
=======
=======

// ANGGOTA 3: KONVERSI BERAT
// ==========================================
void konversiBerat() {
    float kg;
    printf("\n--- Konversi Berat ---\n");
    printf("Masukkan berat dalam Kilogram: ");
    scanf("%f", &kg);
    printf("Gram: %.2f g\n", kg * 1000);
    printf("Pons (Lbs): %.2f lbs\n", kg * 2.20462);
>>>>>>> origin/berat
// ==========================================
// KETUA KELOMPOK & ANGGOTA 5
// Bagian: Menu Utama & Navigasi
// ==========================================
<<<<<<< HEAD

// ==========================================
// ANGGOTA 1: KONVERSI SUHU
// ==========================================

void konversiSuhu() {
    float c;
    printf("\n--- Konversi Suhu ---\n");
    printf("Masukkan suhu dalam Celcius: ");
    scanf("%f", &c);
    printf("Fahrenheit: %.2f F\n", (c * 9/5) + 32);
    printf("Kelvin: %.2f K\n", c + 273.15);
}

>>>>>>> origin/celcius
=======
>>>>>>> origin/berat
int main() {
    int pilihan; // Deklarasi variabel pilihan agar tidak merah

    do {
        printf("\n================================\n");
        printf("   KALKULATOR KONVERSI SATUAN   \n");
        printf("================================\n");
        printf("1. Konversi Suhu\n");
        printf("2. Konversi Jarak\n");
        printf("3. Konversi Berat\n");
        printf("4. Konversi Waktu\n");
        printf("0. Keluar\n");
        printf("--------------------------------\n");
        printf("Pilih Menu (0-4): ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1: konversiSuhu(); break;
            case 2: konversiJarak(); break;
            case 3: konversiBerat(); break;
            case 4: konversiWaktu(); break;
            case 0: printf("Terima kasih telah menggunakan program ini!\n"); break;
            default: printf("Pilihan tidak valid!\n");
        }
    } while (pilihan != 0);


    return 0;
}