#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Polish");
    srand(time(NULL));
    int wiersze = 0;
    int kolumny = 0;
    cout<<"Tablica dwuwymiarowa i średnia.\n";
    cout<<"Podaj liczbę wierszy: ";
    cin>>wiersze;
    cout<<"Podaj liczbę kolumn: ";
    cin>>kolumny;
    float** tab = new float* [wiersze];
    for(int i = 0; i < wiersze; i++)
    {
        tab[i] = new float [kolumny];
    }

    float srednia = 0;
    for(int i = 0; i < wiersze; i++)
    {
        for(int j = 0; j < kolumny; j++)
        {
            tab[i][j] = -5.00+10.00*rand()/RAND_MAX;
            srednia+= tab[i][j];
            if(tab[i][j] >= 0)
                cout<<" ";
            cout<<tab[i][j]<<" ";
        }
        cout<<endl;
    }

    srednia/=(float)wiersze*(float)kolumny;
    cout<<endl<<"Średnia: "<<srednia;

    float minimum = 50;
    int indi = 0;
    int indj = 0;

    for(int i = 0; i < wiersze; i++)
    {
        for(int j = 0; j < kolumny; j++)
        {
            if(fabs(srednia - tab[i][j])< minimum)
            {
                minimum = fabs(srednia - tab[i][i]);
                indi = i;
                indj = j;
            }
                
        }
    }

    cout<<endl<<"Minimum: "<< minimum<<"\nIndeksy: "<<indi<<", "<<indj;

    for(int i = 0; i < wiersze; i++)
    {
        delete [] tab[i];
    }
    delete [] tab;
    return 0;
}