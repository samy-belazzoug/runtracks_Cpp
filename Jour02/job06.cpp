#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Vous voulez itérer jusqu'a ? ";cin >> n;
    int i = 1;
    while (i <= n) {
        if (i % 3 == 0) {cout << i << " est multiple de 3." << endl;}
        if (i % 5 == 0) {cout << i << " est multiple de 5." << endl;}
        i++;
    }
    return 0;
}