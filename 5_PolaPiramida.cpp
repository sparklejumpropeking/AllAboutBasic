#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int tinggiPiramida;
    cin >> tinggiPiramida;
    int angkaTerbesar = tinggiPiramida * tinggiPiramida, lebarAngka = 0;
    while (angkaTerbesar > 0) {
        lebarAngka++;
        angkaTerbesar /= 10;
    }
    int angkaBerjalan = 1;
    for (int lantai = 1; lantai <= tinggiPiramida; lantai++) {
        for (int celah = 0; celah < (tinggiPiramida - lantai) * (lebarAngka + 1); celah++) cout << " ";
        for (int balok = 1; balok <= 2 * lantai - 1; balok++) {
            if (balok > 1) cout << " ";
            cout << setw(lebarAngka) << angkaBerjalan;
            angkaBerjalan++;
        }
        cout << "\n";
    }
    return 0;
}
