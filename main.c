// ANGGOTA 4: KONVERSI WAKTU
// ==========================================
void konversiWaktu() {
    float jam;
    printf("\n--- Konversi Waktu ---\n");
    printf("Masukkan durasi dalam Jam: ");
    scanf("%f", &jam);
    printf("Menit: %.2f menit\n", jam * 60);
    printf("Detik: %.2f detik\n", jam * 3600);}