#include <iostream>

using namespace std;

int main() {

    int n = 10;
    double somme = 0, count = 2;

    while (count <= n) {
        somme += 1/count;
        count++;
    }

    cout << "1/" << n << " = " << 1 + somme;
    return 0;

}