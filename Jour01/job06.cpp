#include <iostream>

using namespace std;

int main() {
    cout << "Table du nombre : ";
    int n;
    cin >> n;
    cout << "Jusqu'a table : ";
    int t;
    cin >> t;
    for (int i=0;i<=t;i++) {
        cout << n << " x " << i << " = " << n*i << endl;
    }
    return 0;
}