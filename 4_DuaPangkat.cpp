#include <iostream>
using namespace std;

int main() {
    long long angkaUji;
    cin >> angkaUji;
    if (angkaUji < 1) {
        cout << "bukan" << "\n";
        return 0;
    }
    while (angkaUji % 2 == 0) angkaUji /= 2;
    if (angkaUji == 1) cout << "ya" << "\n";
    else cout << "bukan" << "\n";
    return 0;
}
