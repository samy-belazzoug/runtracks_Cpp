#include <iostream>

using namespace std;

int main() {

    int a = 5, b = 13,c;
    cout << "Entrez un entier : ";
    cin >> c;

    if (a <= c && c <= b) {
        cout << "GAGNE";
    }

    else {
        cout << "PERDU";
    }

    return 0;
}