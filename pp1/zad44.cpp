#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Polish");
    int a = 2514;
    int b = 4152;

    int tempa = a;
    int licznik = 0;
    while(tempa > 1)
    {
        tempa/=10;
        licznik++;
    }

    bool czySa = true;

    for(int i = 1; i <= licznik; i++)
    {
        int tempa = a;
        int tempb = b;
        int licznika = licznik - i;
        int licznikb = i - 1;
        while(licznika>0)
        {
            tempa/=10;
            licznika--;
        }
        while(licznikb!=0)
        {
            tempb/=10;
            licznikb--;
        }
        tempa%=10;
        tempb%=10;
        if(tempa!=tempb)
        {
            czySa = false;
            break;
        }
            
    }
    cout<<boolalpha<<czySa;
    return 0;
}