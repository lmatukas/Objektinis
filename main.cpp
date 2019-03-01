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

#define N 10

using namespace std;

class Taskas {
private:
    int x;
    int y;
public:
    void Set(int, int);

    int GetX();

    int GetY();

    void Print();
};

void Taskas::Set(int a, int b) {
    x = a;
    y = b;
}

int Taskas::GetX() {
    return x;
}

int Taskas::GetY() {
    return y;
}

void Taskas::Print() {
    cout << "(" << x << "," << y << ")" << endl;
}

//=============================================================================

class TaskuMasyvas {
private:
    Taskas Items[N];
    int count = 0;

    void NullAll();

public:
    void Add(int, int); // Masyva papildo nauju tasku (x,y)
    void Insert(int, int, int); // Iterpia taska (x,y) i nurodyta masyvo vieta
    void Remove(int); // Pasalina nurodyta elementa
    void Print(); // Atspausdina masyva
    Taskas Get(int); // Grazina nurodyta masyvo elementa
    // Numatyti ribojimus (maksimalus lementu skaicius, nurodyto elemento egzistavimas)


};

//=============================================================================

int main() {

    TaskuMasyvas t;
    t.Add(12, 23);
    t.Print();
    t.Add(3, 33);
    t.Print();
    t.Add(44, 234);
    t.Print();
    t.Insert(555,44,0);
    t.Print();
    t.Insert(654444,789765,1);
    t.Print();
    t.Add(12, 23);
    t.Add(12, 23);
    t.Add(12, 23);
    t.Print();
    t.Insert(333,789765,8);
    t.Insert(3,789333765,3);
    t.Add(12, 23);
    t.Insert(333,789765,8);
    t.Print();
}

void TaskuMasyvas::Add(int x, int y) {

    if (count < N) {
        Taskas t;
        t.Set(x, y);
        Items[count] = t;
        count++;

    } else {
        cout << "Sorry, masyvas pilnas";
    }
}

void TaskuMasyvas::Insert(int x, int y, int v) {

    if (count < N && v <= count) {
        Taskas t;
        t.Set(x, y);
        count++;

        for (int i = count; i >= v; --i) {
            Taskas temp = Items[i - 1];
            Items[i] = temp;
        }
        Items[v] = t;

    } else {
        cout << "Sorry, masyvas pilnas";
    }
}

void TaskuMasyvas::Print() {
    cout << "Irasu: " << count << endl;
    for (int i = 0; i < count; ++i) {
        Items[i].Print();
    }
    cout << "============" << endl;
}


