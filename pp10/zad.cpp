#include <iostream>
#include <cstdlib>

using namespace std;

void intro(int* n)
{
    cout<<"Program do odlicznia dwusilni.\n";
    cout<<"Podaj n(0,...,20): ";
    cin>>*n;
}

int dwusilnia(int n)
{
    if(n == 0)
        return 1;
    int s = 1;
    for(int i = 1; i <=n; i++)
    {
        if(n % 2 == 0 && i % 2 == 0)
        {
            s*=i;
        }
        else if(n % 2 !=0 && i % 2 != 0)
        {
            s*=i;
        }
    }
    return s;
}

void print(int n, int s)
{
    cout<<"Dla n: "<<n<<" dwusilnia: "<<s;
}

int main()
{
    setlocale(LC_ALL,"Polish");
    int n = 0;
    intro(&n);
    int s = dwusilnia(n);
    print(n, s);
    return 0;
}