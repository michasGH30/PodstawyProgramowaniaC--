#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Polish");
    cout<<"Program obliczający średni kurs $.\n";
    cout<<"Podaj liczbę dni: ";
    int n = 0;
    cin>>n;
    float* tab = new float [n];
    cout<<"Podaj kurs dla kolejnych dni:\n";
    float srednia = 0;
    for(int i = 0; i < n; i++)
    {
        cout<<"Dzień "<< i+1 <<": ";
        cin>>tab[i];
        srednia+=tab[i];
    }
    cout<<"Średni kurs $: "<<setprecision(3)<<srednia/(float)n;
    delete [] tab;
    return 0;
}