#include <iostream>
using namespace std;

int main() {
    int bilanganDengklek;
    cin >> bilanganDengklek;
    for (int calonFaktor = bilanganDengklek; calonFaktor >= 1; calonFaktor--) {
        if (bilanganDengklek % calonFaktor == 0) cout << calonFaktor << "\n";
    }
    return 0;
}
