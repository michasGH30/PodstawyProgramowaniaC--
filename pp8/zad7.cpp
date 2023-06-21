#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Polish");
    cout<<"Program zamieniający liczby ujemne na 0.\n";
    cout<<"Podaj długość ciągu(max 25): ";
    int n = 0;
    cin>>n;
    int* tab = new int [n];

    for(int i = 0; i < n; i++)
    {
        cout<<"Podaj liczbę: ";
        cin>> tab[i];
    }

    cout<<"\nPrzed zamianą:\n";

    for(int i = 0; i < n; i++)
    {
        cout<<tab[i]<<" ";
        if(tab[i]<0)
            tab[i]=0;
    }

    cout<<"\nPo zamianie:\n";

    for(int i = 0; i < n; i++)
    {
        cout<<tab[i]<<" ";
    }

    delete [] tab;
    return 0;
}