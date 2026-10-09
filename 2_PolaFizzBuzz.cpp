#include <iostream>
using namespace std;

int main() {
    int pembagiFizz, pembagiBuzz, batasHitung;
    cin >> pembagiFizz >> pembagiBuzz >> batasHitung;
    for (int angkaSekarang = 1; angkaSekarang <= batasHitung; angkaSekarang++) {
        bool kenaFizz = angkaSekarang % pembagiFizz == 0;
        bool kenaBuzz = angkaSekarang % pembagiBuzz == 0;
        if (kenaFizz && kenaBuzz) cout << "FizzBuzz";
        else if (kenaFizz) cout << "Fizz";
        else if (kenaBuzz) cout << "Buzz";
        else cout << angkaSekarang;
        cout << "\n";
    }
    return 0;
}
