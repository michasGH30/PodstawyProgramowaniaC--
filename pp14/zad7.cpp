#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

struct pracownik
{
    char nazwisko[50];
    char adres[100];
    char stanowisko[10];
    float brutto;
};


void uzupelnij(string nazwaB, string nazwaT)
{
    fstream plik;
    plik.open(nazwaB.c_str(), ios::binary|ios::out);
    fstream plikT;
    plikT.open(nazwaT.c_str(), ios::in);
    pracownik p;
    for(int i = 0; i < 6; i++)
    {
        plikT>>p.nazwisko>>p.adres>>p.stanowisko>>p.brutto;
        plik.write(reinterpret_cast<char*>(&p), sizeof(p));
    }

    plik.close();
}

void sprawdzenie(string nazwaB)
{
    pracownik p;
    fstream plik;
    plik.open(nazwaB.c_str(), ios::binary|ios::in);
    for(int i = 0; i < 6; i++)
    {
        plik.read(reinterpret_cast<char*>(&p), sizeof(p));
        cout<<p.nazwisko<<" "<<p.adres<<" "<<p.stanowisko<<" "<<p.brutto<<'\n';
    }
    plik.close();
}

bool takie_same(char t[10], char t2[10])
{
    for(int i = 0; i < 10; i++)
    {
        if(t[i]!=t2[i])
            return false;
    }
    return true;
}

void intro(string nazwaB, string nazwaT)
{
    fstream plikB;
    plikB.open(nazwaB.c_str(), ios::binary|ios::in);
    fstream plikT;
    plikT.open(nazwaT.c_str(), ios::out);
    char t2[10]={'K', 'i', 'e', 'r', 'o', 'w', 'n', 'i', 'k', '\0'};
    char t3[10]={'P', 'r', 'a', 'c', 'o', 'w', 'n', 'i', 'k', '\0'};
    int w = 0;
    do
    {
    cout<<"Dla jakiego stanowiska chcesz podsumowanie(1 - Kierownik, 2 - Pracownik): ";
    cin>>w;
    }while(!(w == 1 || w == 2));
    pracownik p;
    float srednia = 0;
    int ile = 0;
    float max = -1;
    string NN;
    string NA;
    string NS;
    float NB;
    plikT<<"Raport pracowników z firmy IT Siedlce znajdującej się na ulicy Siedleckiej 11\nUtworzony: 21.12.2022r.\nSporządził: Michał Żuk\nBaza danych pracowników:\n";
    for(int i = 0; i < 6; i++)
    {
        plikB.read(reinterpret_cast<char*>(&p),sizeof(p));
        plikT<<"Nazwisko: "<<p.nazwisko<<"\tAdres: "<<p.adres<<"\tStanowisko: "<<p.stanowisko<<"\tPłaca brutto: "<<p.brutto<<'\n';
        if(w == 1 && takie_same(p.stanowisko, t2))
        {
            srednia+=p.brutto;
            ile++;
            if(p.brutto > max)
            {
                max = p.brutto;
                NN = p.nazwisko;
                NA = p.adres;
                NS = p.stanowisko;
                NB = p.brutto;
            }
        }else if(w == 2 && takie_same(p.stanowisko, t3))
        {
            srednia+=p.brutto;
            ile++;
            if(p.brutto > max)
            {
                max = p.brutto;
                NN = p.nazwisko;
                NA = p.adres;
                NS = p.stanowisko;
                NB = p.brutto;
            }
        }
    }
    srednia/=(float)ile;

    plikT<<"Podsumowanie dla stanowiska ";
    switch (w)
    {
    case 1:
        plikT<<"Kierownik:\n";
        break;
    case 2:
        plikT<<"Pracownik:\n";
        break;
    }
    plikT<<"Średnie zarobki brutto: "<<srednia<<" zł\nPracownik z największą płacą:\n"<<"Nazwisko: "<<NN<<"\tAdres: "<<NA<<"\tStanowisko: "<<NS<<"\tPłaca brutto: "<<NB;
}

int main()
{
    setlocale(LC_ALL,"Polish");
    uzupelnij("zadanie7.dat", "zadanie7_baza.txt");
    //sprawdzenie("zadanie7.dat");
    intro("zadanie7.dat", "zadanie7.txt");
    return 0;
}