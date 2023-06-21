#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

float max_element(float *tab, int n, float m)
{
    if(n>=0)
    {
        if(tab[n]>m)
            return max_element(tab, n-1, tab[n]);
        else 
            return max_element(tab, n-1, m);
    }
    else
        return m;
}

void wypisz(float *tab, int n)
{
    if(n>-1)
    {
        cout << fixed << setprecision(2)<<tab[n]<<"\n";
        wypisz(tab, n-1);
    }
}

void uzupelnij(float *tab, int n)
{
    if(n>-1)
    {
        tab[n] = rand()/(float)RAND_MAX *12.0 - 3.0;
        uzupelnij(tab, n-1);
    }
}

void menu()
{
    cout<<"Podaj n: ";
    int n = 0;
    cin>>n;
    float *tab = new float [n];
    uzupelnij(tab, n-1);
    wypisz(tab, n-1);
    cout<<'\n'<<max_element(tab, n-1, -5.00);
    delete [] tab;
}

int main()
{
    setlocale(LC_ALL,"Polish");
    srand(time(NULL));
    menu();
    return 0;
}