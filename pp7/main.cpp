#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;
//a = -10.0+20.0*rand()/(RAND_MAX);

struct Student
{
    string nazwisko;
    string kierunek;
    string przedmioty[3];
    int oceny[3];
};

int main()
{
    setlocale(LC_ALL,"Polish");
    srand(time(NULL));
    Student s[100];
    cout<<"Program obsługujący bazę studentów.\n";
    cout<<"Podaj ilość studentów(max 100): ";
    int n;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        s[i].nazwisko = "Żuk";
        s[i].kierunek = "Informatyka";
        s[i].przedmioty[0]="Programowanie";
        s[i].przedmioty[1]="Bazy Danych";
        s[i].przedmioty[2]="Grafika";
        s[i].oceny[0] = 2+3*rand()/(RAND_MAX);
        s[i].oceny[1] = 2+3*rand()/(RAND_MAX);
        s[i].oceny[2] = 2+3*rand()/(RAND_MAX);
    }

    for(int i = 0; i < n; i++)
    {
        cout<<"Nazwisko: "<<s[i].nazwisko;
        cout<<endl;
        cout<<"Kierunek: "<<s[i].kierunek;
        cout<<endl;
        cout<<s[i].przedmioty[0]<<" "<<s[i].oceny[0];;
        cout<<endl;
        cout<<s[i].przedmioty[1]<<" "<<s[i].oceny[1];;
        cout<<endl;
        cout<<s[i].przedmioty[2]<<" "<<s[i].oceny[2];
        cout<<endl;
    }
    cout<<"\nDodajemy ucznia.\n";
    n++;
    cout<<"Podaj nazwisko: ";
    cin>>s[n-1].nazwisko;
    cout<<"Podajemy kierunek: ";
    cin>>s[n-1].kierunek;;
    cout<<"Podajemy oceny dla:\nProgramowanie: ";
    s[n-1].przedmioty[0]="Programowanie";
    cin>>s[n-1].oceny[0];
    cout<<"Bazy Danych: ";
    s[n-1].przedmioty[1]="Bazy Danych";
    cin>>s[n-1].oceny[1];
    cout<<"Grafiki: ";
    s[n-1].przedmioty[2]="Grafika";
    cin>>s[n-1].oceny[2];
    cout<<endl<<endl<<"Po dodaniu ucznia:\n";
    for(int i = 0; i < n; i++)
    {
        cout<<"Nazwisko: "<<s[i].nazwisko;
        cout<<endl;
        cout<<"Kierunek: "<<s[i].kierunek;
        cout<<endl;
        cout<<s[i].przedmioty[0]<<" "<<s[i].oceny[0];;
        cout<<endl;
        cout<<s[i].przedmioty[1]<<" "<<s[i].oceny[1];;
        cout<<endl;
        cout<<s[i].przedmioty[2]<<" "<<s[i].oceny[2];
        cout<<endl;
    }
    cout<<"Podaj średnią: ";
    float srednia = 0;
    cin>>srednia;
    cout<<"Uczniowie ze średnią większą od "<<srednia<<":\n";
    for(int i = 0; i < n; i++)
    {
        float sr = 0;
        sr+=s[i].oceny[0];
        sr+=s[i].oceny[1];
        sr+=s[i].oceny[2];
        sr/=3.0;
        if(sr>srednia)
        {
            cout<<"Nazwisko: "<<s[i].nazwisko;
            cout<<endl;
            cout<<"Kierunek: "<<s[i].kierunek;
            cout<<endl;
            cout<<s[i].przedmioty[0]<<" "<<s[i].oceny[0];;
            cout<<endl;
            cout<<s[i].przedmioty[1]<<" "<<s[i].oceny[1];;
            cout<<endl;
            cout<<s[i].przedmioty[2]<<" "<<s[i].oceny[2];
            cout<<endl;
        }
    }
    return 0;
}