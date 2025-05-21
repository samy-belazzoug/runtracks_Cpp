#ifndef JOUEUR_H
#define JOUEUR_H
#include <iostream>

using namespace  std;

class Joueur {
public:
    int x,y;

    Joueur(int abscisse, int ordonnee) {
        x = abscisse;
        y = ordonnee;
    }

    void get_x() {cout << x << endl;}
    void get_y() {cout << y << endl;}
    void set_x(int value) {x = value;}
    void set_y(int value) {y = value;}
};



#endif //JOUEUR_H
