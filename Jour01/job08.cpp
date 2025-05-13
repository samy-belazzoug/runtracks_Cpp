#include <iostream>

using namespace std;

int main() {
    cout << "Entrez une annee : ";
    int n; cin >> n;
    if (n % 4 == 0) {
        cout << "Annee bissextile.";
    }
    else {
        cout << "Annee pas bissextile.";
    }
    return 0;
}