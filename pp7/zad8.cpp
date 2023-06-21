#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <iomanip>

using namespace std;
//a = -10.0+20.0*rand()/(RAND_MAX);

struct Osoba
{
    string nazwisko;
    string adres;
    float brutto;
    bool pali;
};

int main()
{
    setlocale(LC_ALL,"Polish");
    srand(time(NULL));
    Osoba osoby[100];
    string nazwiska[3] = {"Nowak", "Kowalski", "Chrabąszcz"};
    string adresy[3] = {"ul. A 34", "ul. B 28", "ul. C 12"};
    cout<<"Program zarządzający osobami w firmie.\n";
    cout<<"Podaj ilość pracowników(max 100): ";
    int n = 0;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        osoby[i].nazwisko = nazwiska[3*rand()/(RAND_MAX)];
        osoby[i].adres = adresy[3*rand()/(RAND_MAX)];
        osoby[i].brutto = 3000.00+2000.00*rand()/(RAND_MAX);
        int czy_pali = 100*rand()/(RAND_MAX);
        if(czy_pali>=50)
            osoby[i].pali = true;
        else 
            osoby[i].pali = false;
    }
    cout<<"Po wylosowaniu:\n";
    for(int i = 0; i < 3; i++)
    {
        cout<<"Nazwisko: "<<osoby[i].nazwisko<<endl;
        cout<<"Adres: "<<osoby[i].adres<<endl;
        cout<<"Brutto: "<<setprecision(6)<<osoby[i].brutto<<" zł"<<endl;
        if(osoby[i].pali)
            cout<<"Osoba paląca";
        else
            cout<<"Osoba nie paląca";
        cout<<endl;
    }
    float suma = 0;
    for(int i = 0; i < n; i++)
    {
        suma+=osoby[i].brutto;
    }
    cout<<"\nSuma płacy brutto: "<<suma<<"zł";

    float maximium = osoby[0].brutto;
    for(int i = 1; i < n; i++)
    {
        if(osoby[i].brutto>maximium)
            maximium = osoby[i].brutto;
    }
    cout<<"\nNajwiększa płaca brutto to: "<<maximium<<"zł";

    float minimum = osoby[0].brutto;
    for(int i = 1; i < n; i++)
    {
        if(osoby[i].brutto<minimum)
            minimum = osoby[i].brutto;
    }
    cout<<"\nNajmniejsza płaca brutto to: "<<minimum<<"zł";
    cout<<"\nOsoby palące:\n";
    for(int i = 0; i < n; i++)
    {
        if(osoby[i].pali)
            cout<<"Nazwisko: "<<osoby[i].nazwisko<<endl;
    }
    return 0;
}