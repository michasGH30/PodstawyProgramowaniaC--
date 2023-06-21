#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Polish");
    srand(time(NULL));
    cout<<"Program obliczający k-ty najmniejszy element";
    int a[10];
    int n = 0;
    cout<<"\nPodaj rozmiar tablicy (max 10): ";
    cin>>n;
    cout<<"Podaj, który k-ty najmniejszy element ma być wypisany: ";
    int k = 0;
    cin>>k;
    cout<<"Po wylosowaniu: ";
    for(int i = 0; i < n; i++)
    {
        a[i] = -10+20*rand()/(RAND_MAX);
        cout<<a[i]<<" ";
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-1; j++)
        {
            if(a[j+1]<a[j])
            {
                int temp = a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<endl<<"Po posortowaniu: ";
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl<<a[k-1];
    return 0;
}