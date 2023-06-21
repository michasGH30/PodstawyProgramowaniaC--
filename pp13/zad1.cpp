#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

float czytanie(string nazwa)
{
    fstream plik;
    plik.open(nazwa.c_str(), ios::in);
    float srednia = 0;
    int licznik = 0;
    if(plik.good())
    {
        
        char imie[10];
        char nazwisko[15];
        int rok;
        string kierunek;
        int styp;
        
        while(!plik.eof())
        {
            plik>>imie>>nazwisko>>rok>>kierunek>>styp;
            cout<<imie<<'\t'<<nazwisko<<'\t'<<rok<<'\t'<<kierunek<<'\t'<<styp<<'\n';
            if(rok == 1)
            {
                srednia+=(float)styp;
                licznik++;
            }
        }
        plik.close();
    }
    else 
    {
        cout<<"Błąd pliku.";
    }
    srednia/=(float)licznik;
    return srednia;
}

void intro()
{
    cout<<"Program wczytujący z pliku dane i obliczający średnią\n.";
    cout<<czytanie("zadanie1.txt");
}

int main()
{
    setlocale(LC_ALL,"Polish");
    intro();
    return 0;
}