#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

void sortuj(string nazwa, string n1, string n2, string n3)
{
    fstream plik, ag, hn, oz;
    plik.open(nazwa.c_str(), ios::in);
    ag.open(n1.c_str(), ios::out);
    hn.open(n2.c_str(), ios::out);
    oz.open(n3.c_str(), ios::out);
    if(plik.good() && ag.good() && hn.good() && oz.good())
    {
        string imie,nazwisko,kierunek;
        int rok;
        while (!plik.eof())
        {
           plik>>imie>>nazwisko>>kierunek>>rok;
           if((int)nazwisko[0]>=65 && (int)nazwisko[0]<=71)
           {
                ag<<imie<<" "<<nazwisko<<" "<<kierunek<<" "<<rok<<'\n';
           }
           else if((int)nazwisko[0]>=72 && (int)nazwisko[0]<=78)
           {
                hn<<imie<<" "<<nazwisko<<" "<<kierunek<<" "<<rok<<'\n';
           }
           else if((int)nazwisko[0]>=79 && (int)nazwisko[0]<=90)
           {
                oz<<imie<<" "<<nazwisko<<" "<<kierunek<<" "<<rok<<'\n';
           }
        }
        plik.close();
        ag.close();
        hn.close();
        oz.close();
    }
    else
    {
        cout<<"Błąd z jakimś plikiem.";
    }
}

void intro()
{
    cout<<"Program sortujący studentów po nazwiskach.\n";
    sortuj("zad5.txt","AG.txt","HN.txt","OZ.txt");
}

int main()
{
    setlocale(LC_ALL,"Polish");
    intro();
    return 0;
}