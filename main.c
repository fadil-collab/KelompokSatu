#include <stdio.h>

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
            case 1: printf ("Anggota 1"); break;
            case 2: printf ("Anggota 2"); break;
            case 3: printf ("Anggota 3"); break;
            case 4: printf ("Anggota 4"); break;
            case 0: printf("Terima kasih telah menggunakan program ini!\n"); break;
            default: printf("Pilihan tidak valid!\n");
        }
    } while (pilihan != 0);

    return 0;
}

printf("Hello World");


