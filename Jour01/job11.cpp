#include <iostream>

using namespace std;

int main() {
    int n;
    int m;

    cout << "Entier n : ";
    cin >> n;

    cout << "Entier m : ";
    cin >> m;

    m = n + m;
    n = m - n;
    m = m - n;
    cout << "n : " << n << endl << "m : " << m;
    return 0;
}