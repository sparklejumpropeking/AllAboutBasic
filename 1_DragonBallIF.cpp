#include <cstdio>

void ulangHuruf(char hurufVokal, int lamaTarikan) {
    for (int tarikan = 0; tarikan < lamaTarikan; tarikan++) putchar(hurufVokal);
}

int main() {
    int kekuatanMusuh;
    while (scanf("%d", &kekuatanMusuh) != EOF) {
        for (int bagianJurus = 0; bagianJurus < 2; bagianJurus++) {
            putchar(bagianJurus == 0 ? 'k' : 'h');
            ulangHuruf('a', kekuatanMusuh);
            putchar('m');
            ulangHuruf('e', kekuatanMusuh);
        }
        putchar('h');
        ulangHuruf('a', kekuatanMusuh);
        putchar('\n');
    }
    return 0;
}
