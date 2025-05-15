#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Entrez un nombre entier naturel : ";
    cin >> n;
    if (n < 0) {
        cout << "Il est mathematiquement impossible de calculer la factorielle d'un nombre negatif.";
    }

    if (n == 0) {
        cout << 1;
    }

    else {
        int i = 1, facto = 1;
        while (i <= n) {
            facto *= i;
            i++;
        }
        cout << facto;
    }
    return 0;
}