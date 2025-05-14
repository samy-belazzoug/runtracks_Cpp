#include <iostream>

using namespace std;

int main() {
    int N = 0, count = 5;

    //To make sure the number is above 5
    while (N < 5) {
        cout << "Entrez un entier N superieur a 5 : ";cin >> N;
    }

    int somme = 0;

    while (count <= N) {
        somme += count*count*count;
        count++;
    }

    cout << somme;

    return 0;
}