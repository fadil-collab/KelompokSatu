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