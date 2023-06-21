#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int suma_c(int k)
{
    if(k>0)
    {
        return k%10+suma_c(k/10);
    }
}

void suma_cyfr(int *tab, int n, int *s)
{
    if(n >=0)
    {
        *s+=suma_c(tab[n]);
        suma_cyfr(tab, n-1, s);
    }
}

void uzupelnij(int *tab, int n)
{
    if(n>=0)
    {
        tab[n]=rand()%900 + 100;
        uzupelnij(tab, n-1);
    }
}

void wypisz(int *tab, int n)
{
    if(n>=0)
    {
        cout<<tab[n]<<'\n';
        wypisz(tab, n-1);
    }
}

void menu()
{
    cout<<"Podaj n: ";
    int n = 0; 
    cin>>n;
    int *tab = new int [n];
    uzupelnij(tab, n-1);
    wypisz(tab, n-1);
    cout<<'\n';
    int suma = 0;
    suma_cyfr(tab, n-1, &suma);
    cout<<suma;
    delete [] tab;
}

int main()
{
    setlocale(LC_ALL,"Polish");
    srand(time(NULL));
    menu();
    return 0;
}