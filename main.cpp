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

public:
    void Add(int, int); // Masyva papildo nauju tasku (x,y)
    void Insert(int, int, int); // Iterpia taska (x,y) i nurodyta masyvo vieta
    void Remove(int); // Pasalina nurodyta elementa
    void Print(); // Atspausdina masyva
    Taskas Get(int); // Grazina nurodyta masyvo elementa
    // Numatyti ribojimus (maksimalus lementu skaicius, nurodyto elemento egzistavimas)

};

//=============================================================================


void testAdd();

void testInsert();

void testGet();

void testRemove();

void testPrint();

int main() {

    //Testavimui paruosti metodai:

    testAdd();

    testInsert();

    testGet();

    testRemove();

    testPrint();
}

void TaskuMasyvas::Add(int x, int y) {

    if (count < N) {
        Taskas t;
        t.Set(x, y);
        Items[count] = t;
        count++;
        cout << "============" << endl;
        cout << "Papildyta tasku " << x << " , " << y << endl;
        cout << "============" << endl;
    } else {
        cout << "============" << endl;
        cout << "Sorry, masyvas pilnas" << endl;
        cout << "============" << endl;
    }

}

void TaskuMasyvas::Insert(int x, int y, int v) {

    if (count < N && v <= count) {
        Taskas t;
        t.Set(x, y);
        count++;

        if (count == 10) {
            count = 10;
        }

        int i = count;
        int temp = i;

        cout << "============" << endl;
        cout << "Papildyta tasku " << x << " , " << y << " Irasyta i " << v << " pozicija" << endl;
        cout << "============" << endl;

        for (i; i >= v; --i) {
            Taskas temp = Items[i - 1];
            Items[i] = temp;
        }

        Items[v] = t;
        count = temp;

    } else if (v > count) {
        cout << "============" << endl;
        cout << "Si pozicija negalima " << endl;
        cout << "============" << endl;
    } else {
        cout << "============" << endl;
        cout << "Sorry, masyvas pilnas";
        cout << "============" << endl;
    }
}

void TaskuMasyvas::Print() {

    cout << "============" << endl;
    cout << "Irasu: " << count << endl;
    for (int i = 0; i < count; ++i) {
        Items[i].Print();
    }
    cout << "============" << endl;
}

Taskas TaskuMasyvas::Get(int sk) {

    if (sk >= N || sk >= count) {
        cout << "Toks elementas neegzistuoja" << endl;
    } else {
        cout << "Grazinamas " << sk << " elementas, kuris yra - ";
        Items[sk].Print();
        return Items[sk];
    }
}

void TaskuMasyvas::Remove(int sk) {

    if (sk >= N || sk >= count) {
        cout << "REMOVE " << sk << " - Toks elementas neegzistuoja" << endl;
    } else {
        cout << "Removing " << sk << " element" << endl;
        for (int i = sk; i < count; i++) {

            Items[i] = Items[i + 1];
        }
        count--;
    }
}

void testPrint() {

    TaskuMasyvas t;

    t.Print();
}

void testRemove() {

    TaskuMasyvas t;

    t.Add(12, 23);
    t.Print();
    t.Add(3, 33);
    t.Print();
    t.Add(44, 234);
    t.Print();
    t.Add(555, 44);
    t.Print();
    t.Add(654444, 789765);
    t.Print();
    t.Add(33, 33);
    t.Print();
    t.Add(54, 43);
    t.Print();
    t.Add(65, 65);
    t.Print();
    t.Add(76, 765);
    t.Print();
    t.Add(87, 4);
    t.Print();
    t.Add(87, 765);
    t.Print();
    t.Add(87, 34567);
    t.Print();
    t.Add(87, 2345678);
    t.Print();
    t.Remove(7);
    t.Print();
    t.Remove(10);
    t.Remove(9);
    t.Remove(8);
    t.Print();
    t.Remove(0);
    t.Print();
}

void testGet() {

    TaskuMasyvas t;

    t.Add(12, 23);
    t.Add(3, 33);
    t.Add(44, 234);
    t.Add(555, 44);
    t.Add(654444, 789765);
    t.Insert(23, 45, 10);
    t.Get(0);
    t.Get(1);
    t.Get(2);
    t.Get(3);
    t.Get(4);
    t.Get(5);
    t.Get(6);
}

void testInsert() {

    TaskuMasyvas t;

    t.Insert(12, 23, 0);
    t.Print();
    t.Insert(3, 33, 1);
    t.Print();
    t.Insert(44, 234, 2);
    t.Print();
    t.Insert(555, 44, 3);
    t.Print();
    t.Insert(654444, 789765, 4);
    t.Print();
    t.Insert(33, 33, 5);
    t.Print();
    t.Insert(54, 43, 6);
    t.Print();
    t.Insert(65, 65, 7);
    t.Print();
    t.Insert(76, 765, 8);
    t.Print();
    t.Insert(87, 4, 9);
    t.Print();
    t.Insert(2222, 42, 5);
    t.Print();
}

void testAdd() {

    TaskuMasyvas t;

    t.Add(12, 23);
    t.Print();
    t.Add(3, 33);
    t.Print();
    t.Add(44, 234);
    t.Print();
    t.Add(555, 44);
    t.Print();
    t.Add(654444, 789765);
    t.Print();
    t.Add(33, 33);
    t.Print();
    t.Add(54, 43);
    t.Print();
    t.Add(65, 65);
    t.Print();
    t.Add(76, 765);
    t.Print();
    t.Add(87, 4);
    t.Print();
    t.Add(87, 765);
    t.Print();
    t.Add(87, 34567);
    t.Print();
    t.Add(87, 2345678);
    t.Print();
}


