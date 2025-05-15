#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n, stopped = 1;
    while (stopped != 0) {
        cout << "Entrez un entier naturel : ";
        cin >> n;
        if (n == 0) {
            stopped = 0;
        }
        else if (n < 0) {
            cout << "svp positif." << endl;
        }

        else {
            cout << "sa racine carree est : " << sqrt(n) << endl;
        }
     }
    return 0;
}