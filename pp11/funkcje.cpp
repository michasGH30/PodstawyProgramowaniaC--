#include <iostream>
#include <cstdlib>

using namespace std;

struct liczby
{
    int p;
};

void suma(int* a, int *b, int *c)
{
    for(int i = 0 ; i < 3; i++)
        c[i] = a[i] + b[i];
}

void suma(int t1[3][4], int t2[3][4], int t3[3][4])
{
    for(int i = 0 ; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
            t3[i][j] = t2[i][j] + t1[i][j];
    }
}

int suma(liczby *l1, liczby *l2)
{
    return l1->p + l2->p;
}

void uzupelnij(int* a, int *b)
{
    int l = 0;
    for(int i = 0 ; i < 3; i++)
    {
        a[i] = l;
        b[i] = l+1;
        l++;
    }
}

void uzupelnij(int t1[3][4], int t2[3][4])
{
    int l = 0;
    for(int i = 0 ; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            t1[i][j] = l;
            t2[i][j] = l+1;
            l++;
            if(l>9)
                l=0;
        }
    }
}

void uzupelnij(liczby *l1, liczby* l2)
{
    l1->p = 10;
    l2->p = 20;
}

void wypisz(int *t, int *t2, int* t3)
{
    cout<<"Po dodaniu wektorów:\n";
    for(int i = 0; i < 3; i++)
        cout<<t2[i]<<" ";
    cout<<'\n';
    for(int i = 0; i < 3; i++)
        cout<<t3[i]<<" ";
    cout<<'\n';
    for(int i = 0; i < 3; i++)
        cout<<t[i]<<" ";
    cout<<'\n';
}

void wypisz(int t[3][4], int t2[3][4], int t3[3][4])
{
    cout<<"Po dodawaniu macierzy:\n";
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
            cout<<t2[i][j]<<" ";
        cout<<'\n';
    }
    cout<<'\n';
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
            cout<<t3[i][j]<<" ";
        cout<<'\n';
    }
    cout<<'\n';
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
            cout<<t[i][j]<<" ";
        cout<<'\n';
    }
    cout<<'\n';
}

void wypisz(liczby *l1, liczby *l2)
{
    cout<<"Suma po dodawaniu pól struktur:\n";
    cout<<"P: "<<l1->p<<" P: "<<l2->p<<'\n';
    cout<<suma(l1,l2);
}