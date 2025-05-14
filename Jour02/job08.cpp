#include <iostream>

using namespace std;

int main() {
    int a,b;
    cout << "a : ";cin >> a;
    cout << "b : ";cin >> b;

    int i = a + 1;
    cout << a;
    while (i < b) {
        cout << " " << i;
        i++;
    }
    cout << " " << b;
    return 0;
}