#include <stdio.h>

// Deklarasi Fungsi (Akan diisi oleh Anggota 1-4)
void konversiSuhu();   // Anggota 1
void konversiJarak();  // Anggota 2
void konversiBerat();  // Anggota 3
void konversiWaktu();  // Anggota 4

// ==========================================
// KETUA KELOMPOK & ANGGOTA 5
// Bagian: Menu Utama & Navigasi
// ==========================================

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

int main() {
    int pilihan;

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