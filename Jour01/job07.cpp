#include <iostream>

using namespace std;

int main() {
    cout << "Nombre entier : ";
    int n; cin >> n;

    if (n % 2 == 0) {
        cout << "Pair.";
    }

    else {
        cout << "Impair.";
    }

    return 0;
}