#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cout << "Entrez un entier N : ";cin >> n;
    string nString = to_string(n);

    int size = nString.size();
    string inverse = "";

    while (size != -1) {
        inverse += nString[size];
        size--;
    }
    cout << "Nombre : " << n << endl << "Inverse :" << inverse;
    return 0;
}