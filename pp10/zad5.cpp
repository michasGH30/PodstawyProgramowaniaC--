#include <iostream>
#include <cstdlib>

using namespace std;
/*
    int *w;
    w = &z;

    cout<<*w -> zawartość z;
    cout<<w -> adres z;
    cout<< z -> zawartość z;
*/

void intro(int &n)//// void cos(int *n);  
{
    cout<<"Program sprawdzający czy dana liczba jest sześcianem jakiejś liczby.\n";
    cout<<"Podaj n: ";
    cin>>n;
}

int szescian(int n)
{
    return n*n*n;
}

int czyJest(int n)
{
    for(int i = 0; i < n; i++)
    {
        if(szescian(i) == n)
            return 1;
    }
    return 0;
}

void wypisz(int w, int n)
{
    if(w == 1)
        cout<<"Liczba "<<n<<" jest sześcianem jakiejś liczby";
    else if(w == 0)
        cout<<"Liczba "<<n<<" nie jest sześcianem żadnej liczby";
}

int main()
{
    setlocale(LC_ALL,"Polish");
    int n = 0;
    intro(n);
    int wynik = czyJest(n);
    wypisz(wynik, n);
    return 0;
}