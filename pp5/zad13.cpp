#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Polish");
    int n = 0;
    cout<<"Wariancja i odchylenie standardowe z użyciem pętli for\n";
    cout<<"Podaj rozmiar ciągu: ";
    cin>>n;
    float ex = 0;
    float ex2 = 0;
    int a = 0;
    for(int i = 0; i < n; i++)
    {
        cout<<"Podaj wyraz ciągu: ";
        cin>>a;
        ex2 += pow(a,2);
        ex+=a;
    }
    ex2/=n;
    ex/=n;
    float wariancja = ex2 - pow(ex,2);
    float odch = sqrt(wariancja);
    cout<<"Wariancja: "<<wariancja<<"\nOdchylenie standardowe: "<<odch<<'\n';

    cout<<"Wariancja i odchylenie standardowe z użyciem pętli while\n";

    ex = 0;
    ex2 = 0;
    a = 0;
    int i = 0;
    cout<<"Podaj wyraz ciągu: ";
    cin>>a;
    ex2 += pow(a,2);
    ex+=a;
    i++;
    while(i < n)
    {
        cout<<"Podaj wyraz ciągu: ";
        cin>>a;
        ex2 += pow(a,2);
        ex+=a;
        i++;
    }
    ex2/=n;
    ex/=n;
    wariancja = ex2 - pow(ex,2);
    odch = sqrt(wariancja);
    cout<<"Wariancja: "<<wariancja<<"\nOdchylenie standardowe: "<<odch<<'\n';

    cout<<"Wariancja i odchylenie standardowe z użyciem pętli do while\n";

    ex = 0;
    ex2 = 0;
    a = 0;
    i = 0;
    do
    {
        cout<<"Podaj wyraz ciągu: ";
        cin>>a;
        ex2 += pow(a,2);
        ex+=a;
        i++;
    }
    while(i < n);
    ex2/=n;
    ex/=n;
    wariancja = ex2 - pow(ex,2);
    odch = sqrt(wariancja);
    cout<<"Wariancja: "<<wariancja<<"\nOdchylenie standardowe: "<<odch<<'\n';
    return 0;
}