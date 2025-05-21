#include "main.h"
#include "iostream"

using namespace std;

int main() {
    Joueur gamer;
    gamer.x = 10;
    gamer.y = 5;

    gamer.get_x();
    gamer.get_y();
    gamer.set_x(15);
    gamer.set_y(12);
    cout << "Values are now : " << endl;
    gamer.get_x();
    gamer.get_y();

    return 0;

}