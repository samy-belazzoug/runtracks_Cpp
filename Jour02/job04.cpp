#include <iostream>
#include <string>
using namespace std;

int calculator();

int main() {
    calculator();
    return 0;
}

int calculator() {
    float a,b;
    string calc;

    cout << "Nombre a : "; cin >> a;
    cout << "Operateur : "; cin >> calc;
    cout << "Nombre b : "; cin >> b;

    if (calc != "+" || calc != "-" || calc != "*" || calc != "/") {
        cout << "Operateur invalide (vous avez le droit a : +-*/";
        return 1;
    }

    if (calc == "+") {cout << a+b << endl;return 0;}

    if (calc == "-") {cout << a-b << endl;return 0;}

    if (calc == "*") {cout << a*b << endl;return 0;}

    if (calc == "/") {cout << a/b << endl;return 0;}

    return 0;
}