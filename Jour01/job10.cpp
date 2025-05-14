#include <iostream>

using namespace std;

int main() {
    float prix_kilo, nombre_kilo, taux_TVA;
    cout << "Prix d'un kilo de carottes : "; cin >> prix_kilo;
    cout << "Nombres de kilo : "; cin >> nombre_kilo;
    cout << "Taux de TVA : "; cin >> taux_TVA;

    cout << "Le prix de votre marchandise TTC est de : " << (prix_kilo * nombre_kilo) * taux_TVA << "€";
    return 0;
}