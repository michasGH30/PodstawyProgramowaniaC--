#include <iostream>
#include <cstdlib>
#include "funkcje.cpp"
using namespace std;

struct liczby;

void suma(int* a, int *b, int *c);

void suma(int t1[3][4], int t2[3][4], int t3[3][4]);

int suma(liczby *l1, liczby *l2);

void uzupelnij(int* a, int *b);

void uzupelnij(int t1[3][4], int t2[3][4]);

void uzupelnij(liczby *l1, liczby* l2);

void wypisz(int *t, int *t2, int* t3);

void wypisz(int t[3][4], int t2[3][4], int t3[3][4]);

void wypisz(liczby *l1, liczby *l2);
int main()
{
    setlocale(LC_ALL,"Polish");
    int w1[3];
    int w2[3];
    int w3[3];
    uzupelnij(w1,w2);
    suma(w1,w2,w3);
    wypisz(w3, w1, w2);
    int m = 3; int k = 4;
    int m1[3][4];
    int m2[3][4];
    int m3[3][4];
    uzupelnij(m1,m2);
    suma(m1,m2,m3);
    wypisz(m3, m1, m2);
    liczby *l1 = new liczby;
    liczby *l2 = new liczby;
    uzupelnij(l1,l2);
    wypisz(l1,l2);
    return 0;
}