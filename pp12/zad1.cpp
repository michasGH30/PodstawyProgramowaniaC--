#include <iostream>
#include <cstdlib>

using namespace std;

int ciag(int an)
{
    if(an == 0)
        return 1;
    else if(an == 1)
        return 2;
    else if(an > 1)
        return ciag(an-1)* ciag(an-2);
}

void menu()
{
    cout<<"Podaj n: ";
    int n = 0;
    cin>>n;
    cout<<"Ciąg an: "<<ciag(n);
}

int main()
{
    setlocale(LC_ALL,"Polish");
    menu();
    return 0;
}