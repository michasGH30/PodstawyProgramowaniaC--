#include <iostream>
#include <cstdlib>

using namespace std;

void intro(int *t1, int *t2)
{
    cout<<"Program do licznia iloczynu wektorowego.\n";
    cout<<"Podaj elementy 1 wektora: ";
    for(int i = 0; i < 3; i++)
        cin>>t1[i];
    cout<<"Podaj elementy 2 wektora: ";
    for(int i = 0; i < 3; i++)
        cin>>t2[i];
}

void iloczyn(int *t1, int *t2, int *w)
{
    w[0] = t1[1]*t2[2]-t1[2]*t2[1];
    w[1] = t1[2]*t2[0]-t1[0]*t2[2];
    w[2] = t1[0]*t2[1]-t1[1]*t2[0];
}

void wypisz(int *t1, int *t2, int *w)
{
    cout<<"Wynikiem mnożenia wektorów:\n";
    cout<<"a: ["<<t1[0]<<", "<<t1[1]<<", "<<t1[2]<<"]\n";
    cout<<"b: ["<<t2[0]<<", "<<t2[1]<<", "<<t2[2]<<"]\n";
    cout<<"Jest:\n";
    cout<<"c: ["<<w[0]<<", "<<w[1]<<", "<<w[2]<<"]\n";
}

int main()
{
    setlocale(LC_ALL,"Polish");
    int t1[3];
    int t2[3];
    int w[3];
    intro(t1,t2);
    iloczyn(t1, t2, w);
    wypisz(t1, t2, w);
    return 0;
}