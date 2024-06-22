
#include <stdio.h>

int main() {
    char t;
    int u;
    int valid;
    char pilihan;
    char operasi;
    int hasil = 0;
    int angka_sebelumnya = 0;

    do {
        valid = 0;
        while (!valid) {
            printf("Masukkan sebuah abjad: ");
            scanf(" %c", &t);

            // Menghitung posisi abjad dalam alfabet (A-Z atau a-z)
            if (t >= 'A' && t <= 'Z') {
                u = t - 'A' + 1;
                valid = 1;  // Menandakan input valid
            } else if (t >= 'a' && t <= 'z') {
                u = t - 'a' + 1;
                valid = 1;  // Menandakan input valid
            } else {
                printf("Karakter yang dimasukkan bukan abjad. Silakan coba lagi.\n");
            }
        }

        printf("%c merupakan abjad yang ke - %d\n", t, u);

        if (angka_sebelumnya == 0) {
            angka_sebelumnya = u;
            hasil = u;
        } else {
            printf("Masukkan operasi (+, -, *, /): ");
            scanf(" %c", &operasi);

            switch (operasi) {
                case '+':
                    hasil = angka_sebelumnya + u;
                    break;
                case '-':
                    hasil = angka_sebelumnya - u;
                    break;
                case '*':
                    hasil = angka_sebelumnya * u;
                    break;
                case '/':
                    if (u != 0) {
                        hasil = angka_sebelumnya / u;
                    } else {
                        printf("Tidak bisa membagi dengan nol. Operasi diabaikan.\n");
                        hasil = angka_sebelumnya;
                    }
                    break;
                default:
                    printf("Operasi tidak valid. Operasi diabaikan.\n");
                    hasil = angka_sebelumnya;
            }

            printf("Hasil operasi: %d\n", hasil);
            angka_sebelumnya = hasil;
        }

        // Menanyakan apakah pengguna ingin melanjutkan
        printf("Apakah kamu ingin tahu abjad yang lainnya? (y/n): ");
        scanf(" %c", &pilihan);

    } while (pilihan == 'y' || pilihan == 'Y');

    printf("Terima kasih!\n");

    return 0;
}
