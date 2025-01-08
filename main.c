#include <stdio.h>
#include <stdlib.h>

int main()
{
    // --------------------------------------------------------------
    // Praktikum 3, no. 1
    // Program untuk menentukan bentuk benda (padat, cair, gas) berdasarkan suhu
    printf("--------------------Praktikum 5--------------------\n\n\n");
    printf("Percobaan 1: Bentuk benda (padat / cair / gas) berdasarkan suhu\n");
    float suhu;

    // Input suhu dari pengguna
    printf("Masukkan temperatur suhu: ");
    scanf("%f", &suhu);

    // Menentukan bentuk benda berdasarkan suhu
    if (suhu < 0) 
        printf("Benda berbentuk padat\n\n");
    if (suhu >= 0 && suhu <= 100) 
        printf("Benda berbentuk cair\n\n");
    if (suhu > 100) 
        printf("Benda berbentuk gas\n\n");

    // --------------------------------------------------------------
    
    // Praktikum 3, no. 2
    // Program untuk merekrut karyawan berdasarkan nilai test akademik, keterampilan, dan psikologi
    printf("Percobaan 2: Rekruitmen Karyawan berdasarkan Test Akademik, Test Keterampilan dan Test Psikologi\n");
    int akademik, keterampilan, psikologi, lulus;

    // Input nilai-nilai test
    printf("Masukkan nilai Test Akademik: ");
    scanf("%d", &akademik);
    printf("Masukkan nilai Test Keterampilan: ");
    scanf("%d", &keterampilan);
    printf("Masukkan nilai Test Psikologi: ");
    scanf("%d", &psikologi);

    // Menilai kelulusan dan menentukan penempatan berdasarkan hasil test
    if ((akademik + keterampilan + psikologi) / 3 >= 75) {
        printf("Status: Diterima\n");

        // Menentukan potensi pelamar
        if (akademik == keterampilan && akademik == psikologi)
            printf("Pelamar memiliki potensi yang sama antara ketiga job\n\n");
        else if (akademik == keterampilan && akademik > psikologi)
            printf("Pelamar memiliki potensi yang sama antara Administrasi dan Produksi\n\n");
        else if (akademik == psikologi && akademik > keterampilan)
            printf("Pelamar memiliki potensi yang sama antara Administrasi dan Pemasaran\n\n");
        else if (keterampilan == psikologi && keterampilan > akademik)
            printf("Pelamar memiliki potensi yang sama antara Produksi dan Pemasaran\n\n");
        else if (akademik > keterampilan || akademik > psikologi)
            printf("Penempatan: Administrasi\n\n");
        else if (keterampilan > akademik || keterampilan > psikologi)
            printf("Penempatan: Produksi\n\n");
        else if (psikologi > akademik || psikologi > keterampilan)
            printf("Penempatan: Pemasaran\n\n");
    } else {
        printf("Status: Tidak Diterima\n\n");
    }

    // --------------------------------------------------------------
    
    // Praktikum 3, no. 3
    // Program kalkulator sederhana dengan pengecekan validasi pilihan operator
    // Fungsi untuk mengecek pilihan yang tidak valid
    void pilihan_gada_3(float *pilihan) {
        do {
            printf("Pilihan anda salah!! Tolong ulangi lagi: ");
            scanf("%f", pilihan);
        } while (*pilihan < 1 || *pilihan > 4);
    }

    // Fungsi untuk menangani pembagian dengan nol
    void pembagian_nol(float *angka2_3) {
        do {
            printf("Error!!: Pembagian dengan nol tidak diperbolehkan. Tolong masukkan lagi bilangan kedua: ");
            scanf("%f", angka2_3);
        } while (*angka2_3 == 0);
    }

    // Program kalkulator sederhana
    printf("Percobaan 3: Kalkulator sederhana\n");
    float angka1_3, angka2_3, pilihan;

    // Input dua angka untuk operasi
    printf("Masukkan bilangan pertama: ");
    scanf("%f", &angka1_3);
    printf("Masukkan bilangan kedua: ");
    scanf("%f", &angka2_3);

    // Menampilkan menu operasi matematika
    printf("Menu Matematika: \n1. Penjumlahan\n2. Pengurangan\n3. Pembagian\n4. Pengalian\nMasukkan pilihan anda: ");
    scanf("%f", &pilihan);

    // Mengecek apakah pilihan valid
    if (pilihan < 1 || pilihan > 4)
        pilihan_gada_3(&pilihan);

    // Menentukan hasil operasi berdasarkan pilihan
    if (pilihan == 1)
        printf("Hasil operasi = %.3f", angka1_3 + angka2_3);
    else if (pilihan == 2)
        printf("Hasil operasi = %.3f", angka1_3 - angka2_3);
    else if (pilihan == 3)
        if (angka2_3 != 0)
            printf("Hasil operasi = %.3f", angka1_3 / angka2_3);
        else {
            pembagian_nol(&angka2_3);
            printf("Hasil operasi = %.3f", angka1_3 / angka2_3);
        }
    else if (pilihan == 4)
        printf("Hasil operasi = %.3f", angka1_3 * angka2_3);
    printf("\n\n");

    // --------------------------------------------------------------
    
    // Praktikum 3, no. 4
    // Program konversi nilai angka ke nilai huruf
    // Fungsi untuk memvalidasi input angka yang lebih besar dari 100
    void ulang_nilai_invalid_4(float *angka) {
        do {
            printf("Nilai tidak valid!! Masukkan bilangan <= 100: ");
            scanf("%f", angka);
        } while (*angka > 100);
    }

    // Program konversi nilai angka ke nilai huruf
    printf("Percobaan 4: Konversi nilai angka ke nilai huruf\n");
    float angka;

    // Input angka untuk konversi
    printf("Masukkan bilangan untuk konversi ke huruf: ");
    scanf("%f", &angka);

    // Mengecek apakah angka lebih dari 100
    if (angka > 100) {
        ulang_nilai_invalid_4(&angka);
    }

    // Menentukan nilai huruf berdasarkan angka
    if (angka <= 40)
        printf("Nilai Huruf adalah E\n\n");
    else if (angka <= 55)
        printf("Nilai Huruf adalah D\n\n");
    else if (angka <= 60)
        printf("Nilai Huruf adalah C\n\n");
    else if (angka <= 80)
        printf("Nilai Huruf adalah B\n\n");
    else if (angka <= 100)
        printf("Nilai Huruf adalah A\n\n");

    return 0;
}
