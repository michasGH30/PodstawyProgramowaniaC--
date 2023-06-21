#include <iostream>
#include <cstdlib>

using namespace std;

void uzupelnij(int n, int *t)
{
    cout<<"Program obliczający funkcję f(x) = 2 * x - 5"<<'\n';
    int liczba = -2;
    for(int i = 0; i < n; i++)
    {
        t[i]=liczba;
        liczba++;
    }
}

int f(int x)
{
    return 2 * x - 5;
}

void wykonaj(int n, int *t , int *t2)
{
    for(int i = 0; i < n; i++)
    {
        t2[i] = f(t[i]);
    }
}

void wypisz(int n, int *t, int *t2)
{
    for(int i = 0; i < n; i++)
    {
        cout<<"x = "<<t[i]<<", f(x) = "<<t2[i]<<'\n';
    }
}

int main()
{
    setlocale(LC_ALL,"Polish");
    int tab[9];
    int tab_wyniki[9];
    int n = 9;
    uzupelnij(n, tab);
    wykonaj(n, tab, tab_wyniki);
    wypisz(n, tab, tab_wyniki);
    return 0;
}