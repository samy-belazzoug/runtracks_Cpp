#include <iostream>

using namespace std;

int main() {
    cout << "How much time you want Hello World ? : ";
    int n;
    cin >> n;

    while (n-1 >= 0) {
        cout << "Hello World" << endl;
        n--;
    }
    return 0;
}