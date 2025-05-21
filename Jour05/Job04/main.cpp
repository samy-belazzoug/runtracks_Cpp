#include "main.h"
#include "iostream"

using namespace std;

int main() {
    Joueur gamer;
    Joueur gamer1(5,10);
    Joueur gamer2(12,7,"Smurf1");
    gamer.get_x(); gamer.get_y();
    gamer1.get_x(); gamer1.get_y();
    gamer2.get_x(); gamer2.get_y();cout << gamer2.pseudo;

    return 0;

}