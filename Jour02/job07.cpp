#include <iostream>

using namespace std;

int main() {
    int a,b;
    cout << "a : ";cin >> a;
    cout << "b : ";cin >> b;

    cout << a;
    for (int i = a+1;i<b;i++) {
        cout << " " << i;
    }
    cout << " " << b;
    return 0;
}