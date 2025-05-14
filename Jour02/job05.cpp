#include <iostream>

using namespace std;

void validation();

int main() {
    validation();
    return 0;
}

void validation() {
    float n;
    cout << "Saisissez votre note : ";
    cin >> n;

    if (n > 20 || n < 0) {cout << "Entrez une note entre 0 et 20.";}

    if (n >= 10 && n <= 20) {cout << "valide";}

    if (n < 10) {cout << "non valide";}
}
