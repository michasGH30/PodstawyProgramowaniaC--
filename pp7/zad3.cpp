#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <iomanip>

using namespace std;
//a = -10.0+20.0*rand()/(RAND_MAX);

struct Ksiazka
{
    string tytul;
    string autor;
    int indeks;
    int rok_wydania;
    float cena; 
};

int main()
{
    setlocale(LC_ALL,"Polish");
    srand(time(NULL));
    string autorzy[3]={"Kowalski", "Nowak", "Słowacki"};
    string tytuly[3] = {"AAA", "BBB", "CCC"};
    Ksiazka k[100];
    for(int i = 0; i < 100; i++)
    {
        k[i].tytul = tytuly[3*rand()/(RAND_MAX)];
        k[i].autor = autorzy[3*rand()/(RAND_MAX)];
        k[i].indeks = 1000+2000*rand()/(RAND_MAX);
        k[i].rok_wydania = 2000+22*rand()/(RAND_MAX);
        k[i].cena = 1.00+50.0*rand()/(RAND_MAX);
    }
    cout<<"Program zarządzający książkami.\n";
    cout<<"Podaj rok(2000-2022): ";
    int rok = 0;
    cin>>rok;
    for(int i = 0; i < 100; i++)
    {
        if(k[i].rok_wydania == rok)
        {
            cout<<"Tytuł: "<<k[i].tytul<<endl;
            cout<<"Autor: "<<k[i].autor<<endl;
            cout<<"Indeks: "<<k[i].indeks<<endl;
            cout<<"Rok wydania: "<<k[i].rok_wydania<<endl;
            cout<<setprecision(4)<<"Cena: "<<k[i].cena<<" zł"<<endl<<endl;
        }
        
    }

    cout<<"\nPodaj najmniejszą kwotę za jaką możesz kupić książkę(1.00-51.00)[zł]: ";
    float cena = 0;
    cin>>cena;
    for(int i = 0; i < 100; i++)
    {
        if(k[i].cena > cena)
        {
            cout<<"Tytuł: "<<k[i].tytul<<endl;
            cout<<"Autor: "<<k[i].autor<<endl;
            cout<<"Indeks: "<<k[i].indeks<<endl;
            cout<<"Rok wydania: "<<k[i].rok_wydania<<endl;
            cout<<setprecision(4)<<"Cena: "<<k[i].cena<<" zł"<<endl<<endl;
        }
        
    }

    cout<<"\nPodaj Autora(Kowalski, Nowak, Słowacki): ";
    string autor;
    cin>>autor;
    for(int i = 0; i < 100; i++)
    {
        if(k[i].autor == autor)
        {
            cout<<"Tytuł: "<<k[i].tytul<<endl;
            cout<<"Autor: "<<k[i].autor<<endl;
            cout<<"Indeks: "<<k[i].indeks<<endl;
            cout<<"Rok wydania: "<<k[i].rok_wydania<<endl;
            cout<<setprecision(4)<<"Cena: "<<k[i].cena<<" zł"<<endl<<endl;
        }
        
    }
    return 0;
}