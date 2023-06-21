#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

namespace kalkulator
{
    int suma(int a, int b)
    {
        return a + b;
    }

    int roznica(int a, int b)
    {
        return a - b;
    }

    int iloczyn(int a, int b)
    {
        return a * b;
    } 

    float iloraz(int a, int b)
    {
        if(b != 0)
            return a / b;
        else return 0;
    }

    int modulo(int a, int b)
    {
        return a % b;
    }

    int* tablica(int n)
    {
        int* tab = new int [n];
        for(int i = 0; i < n; i++)
        {
            tab[i] = rand() % 5 - 2;
        }
        return tab;
    }

    float sin(int a)
    {
        int temp = a * M_PI / 180;
        return std::sin(temp);
    }

    float cos(int a)
    {
        int temp = a * M_PI / 180;
        return std::cos(temp);
    }

    float tan(int a)
    {
        int temp = a * M_PI / 180;
        return std::tan(temp);
    }
        
}

using namespace kalkulator;

void menu()
{
    cout<<"Suma 1 + 2: "<<suma(10,2)<<'\n';
    cout<<"Różnica 1 - 2: "<<roznica(10,2)<<'\n';
    cout<<"Iloczyn 1 * 2: "<<iloczyn(10,2)<<'\n';
    cout<<"Iloraz 1 / 2: "<<iloraz(10,2)<<'\n';
    cout<<"Modulo 1 % 2: "<<modulo(10,2)<<'\n';
    int n = 0;
    cout<<"Podaj długość tablicy: ";
    cin>>n;
    int *t = tablica(n);
    cout<<"Tablica:\n";
    for(int i = 0; i < n; i++)
    {
        cout<<t[i]<<" ";
    }
    cout<<'\n';
    cout<<"Sin dla 60 stopni: "<<sin(60)<<'\n';
    cout<<"Cos dla 60 stopni: "<<cos(60)<<'\n';
    cout<<"Tan dla 60 stopni: "<<tan(60)<<'\n';
}
int main()
{
    setlocale(LC_ALL,"Polish");
    srand(time(NULL));
    menu();
    return 0;
}