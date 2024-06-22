#include <stdio.h>

int main() {
    char t;
    int u;

    printf("Masukkan sebuah abjad: ");
    scanf(" %c", &t);

    // Menghitung posisi abjad dalam alfabet (A-Z atau a-z)
    if (t >= 'A' && t <= 'Z') {
        u = t - 'A' + 1;
    } else if (t >= 'a' && t <= 'z') {
        u = t - 'a' + 1;
    } else {
        printf("Karakter yang dimasukkan bukan abjad.\n");
        return 1;
    }

    printf("%c merupakan abjad yang ke - %d\n", t, u);

    return 0;
}
