//
// Created by mac on 2019-03-02.
//
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

int main() {

    int mass[] = {2,45,1,66,3,6,17,266,59,7};

    cout << (sizeof(mass)/sizeof(*mass)) << "ilgis" << endl;

    for (int i = 0; i < (sizeof(mass)/sizeof(*mass)); ++i) {
        cout << mass[i] << " ";
    }


    return 0;
}