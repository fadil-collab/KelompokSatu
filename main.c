#include <stdio.h>

// --- DEKLARASI FUNGSI ---
void konversiSuhu();
void konversiJarak();
void konversiBerat();
void konversiWaktu();

// --- BAGIAN KAMU (Anggota 2) ---
void konversiJarak() {
    float km;
    printf("\n--- Konversi Jarak ---\n");
    printf("Masukkan jarak dalam Kilometer: ");
    scanf("%f", &km);
    printf("Meter: %.2f m\n", km * 1000);
    printf("Centimeter: %.2f cm\n", km * 100000);
}

// --- BAGIAN ANGGOTA LAIN (Template Kosong) ---
void konversiSuhu() {
    printf("\nFitur belum dibuat oleh Anggota 1.\n");
}

void konversiBerat() {
    printf("\nFitur belum dibuat oleh Anggota 3.\n");
}

void konversiWaktu() {
    printf("\nFitur belum dibuat oleh Anggota 4.\n");
}

// --- MENU UTAMA ---
int main() {
    int pilihan;

    do {
        printf("\n=== PROGRAM KONVERSI KELOMPOK 1 ===\n");
        printf("1. Konversi Suhu\n");
        printf("2. Konversi Jarak\n");
        printf("3. Konversi Berat\n");
        printf("4. Konversi Waktu\n");
        printf("0. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1: konversiSuhu(); break;
            case 2: konversiJarak(); break;
            case 3: konversiBerat(); break;
            case 4: konversiWaktu(); break;
            case 0: printf("Keluar dari program...\n"); break;
            default: printf("Pilihan tidak valid!\n");
        }
    } while (pilihan != 0);

    return 0;
}