#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int r,outside,inside;
    cin>>r>>outside>>inside;
    for(int i = -50; i <=50; i++)
    {
        for(int j = 50; j >=-50; j--)
        {
            if(pow(i,2) + pow(j,2) <= pow(r,2))
                cout<<inside;
            else
                cout<<outside;
        }
        cout<<'\n';
    }
    return 0;
}