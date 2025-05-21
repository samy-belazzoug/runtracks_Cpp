#ifndef JOUEUR_H
#define JOUEUR_H
#include <iostream>
#include <string>

using namespace  std;

class Joueur {
public:
    int x,y;
    string pseudo;

    Joueur() {
        x = 0;
        y = 0;
    }


    Joueur(int abs, int ord) {
        x = abs;
        y = ord;
    }

    Joueur(int abscisse, int ordonnee, string nom) {
        x = abscisse;
        y = ordonnee;
        pseudo = nom;
    }

    void get_x() {cout << x << endl;}
    void get_y() {cout << y << endl;}
    void set_x(int value) {x = value;}
    void set_y(int value) {y = value;}
};



#endif //JOUEUR_H
