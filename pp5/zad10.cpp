#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Polish");
    srand(time(NULL));
    int wybor = 0;
    cout<<"0. Koniec programu."<<'\n';
    cout<<"1. Kalkulator"<<'\n';
    cin>>wybor;
    while(wybor!=0)
    {
        int wybor2 = 0;
        cout<<"1. Kalkulator podstawowy"<<'\n';
        cout<<"2. Kalkulator rozszerzony"<<'\n';
        cin>>wybor2;
        if(wybor2  == 1)
        {
            cout<<"1. Dodawanie"<<'\n';
            cout<<"2. Odejmowanie"<<'\n';
            cout<<"3. Mnożenie"<<'\n';
            cout<<"4. Dzielenie"<<'\n';
            int wybor3 = 0;
            cin>> wybor3;
            float a = 0;
            float b = 0;
            cout<<"Podaj liczby:\na = ";
            cin>>a;
            cout<<"b = ";
            cin>>b;
            switch(wybor3)
            {
                case 1:
                    cout<<"Wynik dodawania: "<<a+b;
                    break;
                case 2:
                    cout<<"Wynik odejmowania: "<<a-b;
                    break;
                case 3:
                    cout<<"Wynik mnożenia: "<<a*b;
                    break;
                case 4:
                    cout<<"Wynik dzielenia: "<<a/b;
                    break;
                default:
                    cout<<"Blędna opcja.";
                    break;
            }
        }
        else if(wybor2==2)
        {
            cout<<"1. Dodawanie"<<'\n';
            cout<<"2. Odejmowanie"<<'\n';
            cout<<"3. Mnożenie"<<'\n';
            cout<<"4. Dzielenie"<<'\n';
            cout<<"5. Funkcja sinus"<<'\n';
            cout<<"6. Funkcja cosinus"<<'\n';
            cout<<"7. Funkcja exp"<<'\n';
            cout<<"8. Liczba pseudolosowa z przedziału 0...1"<<'\n';
            int wybor3 = 0;
            cin>> wybor3;
            float a = 0;
            float b = 0;
            float tryga = 0;
            float trygb = 0;
            switch(wybor3)
            {
                case 1:
                    
                    cout<<"Podaj liczby:\na = ";
                    cin>>a;
                    cout<<"b = ";
                    cin>>b;
                    cout<<"Wynik dodawania: "<<a+b;
                    break;
                case 2:
                    cout<<"Podaj liczby:\na = ";
                    cin>>a;
                    cout<<"b = ";
                    cin>>b;
                    cout<<"Wynik odejmowania: "<<a-b;
                    break;
                case 3:
                    cout<<"Podaj liczby:\na = ";
                    cin>>a;
                    cout<<"b = ";
                    cin>>b;
                    cout<<"Wynik mnożenia: "<<a*b;
                    break;
                case 4:
                    cout<<"Podaj liczby:\na = ";
                    cin>>a;
                    cout<<"b = ";
                    cin>>b;
                    cout<<"Wynik dzielenia: "<<a/b;
                    break;
                case 5:
                    cout<<"Podaj liczbę stopni: ";
                    cin>>tryga;
                    trygb = tryga * M_PI / 360;
                    cout<<"Sinus: "<<sin(trygb);
                    break;
                case 6:
                    cout<<"Podaj liczbę stopni: ";
                    cin>>tryga;
                    trygb = tryga * M_PI / 360;
                    cout<<"Cosinus: "<<cos(trygb);
                    break;
                default:
                    cout<<"Blędna opcja.";
                    break;
                case 7:
                    cout<<"Podaj n ciągu: ";
                    cin>>a;
                    cout<<"Funkcja exp: "<<exp(a);
                    break;
                case 8:
                    cout <<(float)(rand()) / ((float)(RAND_MAX));
                    break;
            }
        }
        else 
        {
            cout<<"Błędna opcja"<<'\n';
        }
        cout<<'\n'<<"0. Koniec programu."<<'\n';
        cout<<"1. Kalkulator"<<'\n';
        cin>>wybor;
    }
    
    return 0;
}