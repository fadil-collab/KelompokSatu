void konversiJarak() {
    float km;
    printf("\n--- Konversi Jarak ---\n");
    printf("Masukkan jarak dalam Kilometer: ");
    scanf("%f", &km);
    printf("Meter: %.2f m\n", km * 1000);
    printf("Centimeter: %.2f cm\n", km * 100000);