#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

void intro(string nazwa)
{
    int w,h;
    cout<<"Podaj ilość wierszy: ";
    cin>>w;
    cout<<"Podaj ilość kolumn: ";
    cin>>h;
    int** tab = new int* [w];

    for(int i = 0; i < w; i++)
    {
        tab[i] = new int [h];
    }

    for(int i = 0; i < w; i++)
    {
        for(int j = 0; j < h; j++)
        {
            tab[i][j] = rand()%10;
            cout<<tab[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Podaj dzielnik k: ";
    int k;
    cin>>k;

    fstream plik;
    plik.open(nazwa.c_str(), ios::binary | ios::out);

    for(int i = 0; i < w; i++)
    {
        for(int j = 0; j < h; j++)
        {
            if(tab[i][j]%k == 0)
            {
                plik.write((char*) (&tab[i][j]), sizeof(int));
            }
        }
    }

    plik.close();

    plik.open(nazwa.c_str(), ios::binary| ios::in);

    plik.seekg(0,ios::end);
    streamsize dlugosc_pliku = plik.tellg();

    plik.seekg(0);

    int *tab1 = new int[dlugosc_pliku];

    int m = 0;

    while((k = plik.get()) != EOF)
    {
        tab1[m] = k;
        m++;
    }

    cout<<'\n';

    for(int i = 0; i<dlugosc_pliku; i++)
    {
        cout<<tab1[i]<<" ";
    }

    delete [] tab1;

    plik.close();

    for(int i = 0; i < w; i++)
    {
        delete [] tab[i];
    }
    delete [] tab;
}

int main()
{
    setlocale(LC_ALL,"Polish");
    srand(time(NULL));
    intro("zadanie4.dat");
    return 0;
}