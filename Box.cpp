//Sudarykite klas ˛e Box, turinci ˛a šiuos narius: ˇ
//        I Tris privacius kintamuosius ˇ double tipo kintamuosius L, W, H dežut ˙ es ilgiui, ˙
//plociui ir aukš ˇ ciui saugoti. ˇ
//        I Konstruktoriu˛ be parametru˛, kintamiesiems L, W, H priskirianti˛ vienetines
//        reikšmes.
//I Konstruktoriu˛ su vienu parametru, kintamiesiems L, W, H priskirianti˛
//parametru perduot ˛a reikšm ˛e.
//I Konstruktoriu˛ su trim parametrais, kintamiesiems L, W, H priskirianti˛
//parametrais perduotas reikšmes.
//I Destruktoriu˛, kuris informuoja apie klases objekto sunaikinim ˛a.
//turio skaiciavimui

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <stdio.h>
#include <math.h>
#include <string>
#include <fstream>
#include <ctime>
#include <cstring>
#include <string>

using namespace std;

class Box {

private:
    double L;
    double W;
    double H;

public:

    Box();
    Box(int a);
    Box(int a, int b, int c);
    ~Box();
    double turis();
};


int main() {

    Box b1;
    cout << b1.turis() << endl;
    Box b2(12);
    cout << b2.turis() << endl;
    Box b3(12, 2, 4);
    cout << b3.turis() << endl;

    return 0;
}

Box::Box() {
    L = 1;
    W = 1;
    H = 1;
};

Box::Box(int a) {
    L = a;
    W = a;
    H = a;

};

Box::Box(int a, int b, int c) {
    L = a;
    W = b;
    H = c;

};

Box::~Box() {
    cout << "sunaikinta" << endl;
}

double Box::turis() {
    return L * W * H;
}
