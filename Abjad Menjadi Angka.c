#include <stdio.h>

int main() {
    char t;
    int u;
    int valid;
    char pilihan;

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

        // Menanyakan apakah pengguna ingin melanjutkan
        printf("Apakah kamu ingin tahu abjad yang lainnya? (y/n): ");
        scanf(" %c", &pilihan);

    } while (pilihan == 'y' || pilihan == 'Y');

    printf("Terima kasih!\n");

    return 0;
}
