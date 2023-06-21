#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Polish");
    srand(time(NULL));
    int licznik = 0;
    int wylosowana = 10*rand()/(RAND_MAX);
    int a = 0;
    cout<<"Zgadnij liczbę od 0 do 9: ";
    cin>>a;
    licznik++;
    while(a!=wylosowana)
    {
        cout<<"Zgadnij liczbę od 0 do 9: ";
        cin>>a;
        licznik++;
    }
    if(licznik<=3)
        cout<<"PIN poprawny";
    else
        cout<<"PIN niepoprawny";
    return 0;
}