#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void poczatek(int *n)
{
    cout<<"Program obliczający wynagrodzenia."<<'\n';
    cout<<"Podaj liczbę pracowników: ";
    cin>>*n;
}

void wypelnij(int n, float *t)
{
    for(int i = 0; i < n; i++)
    {
        t[i] = rand()/(float)RAND_MAX * 4000.00 + 1000.00;
    }
}

void sortuj(int n, float *t)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - 1; j++)
        {
            if(t[j + 1]<  t[j])
            {
                swap(t[j], t[j+1]);
            }
        }
    }
}

float mediana(int n, float *t)
{
    int ktore = n/2;
    if(n % 2 != 0)
    {
        return t[ktore];
    }
    else 
    {
        return (t[ktore]+t[ktore-1])/2;
    }
}

float srednia(int n, float *t)
{
    float s = 0;
    for(int i = 0; i < n; i++)
    {
        s+=t[i];
    }
    return s/(float)n;
}

void wypisz(int n, float* t)
{
    cout<<"Wylosowane płace:"<<'\n';
    for(int i = 0; i < n; i++)
    {
        cout<<t[i]<<", ";
    }
    cout<<endl;
}

int main()
{
    setlocale(LC_ALL,"Polish");
    srand(time(NULL));
    int n;
    poczatek(&n);
    float *tab = new float [n];
    wypelnij(n, tab);
    sortuj(n, tab);
    wypisz(n, tab);
    float m = mediana(n, tab);
    cout<<"Mediana: "<<m<<'\n';
    float sr = srednia(n, tab);
    cout<<"Średnia: "<<sr<<'\n';
    if(m > sr)
        cout<<"Ponad połowa pracowników dostaje więcej niż średnia";
    else 
        cout<<"Mniej niż połowa pracowników dostaje więcej niż średnia";
    delete [] tab;
    return 0;
}