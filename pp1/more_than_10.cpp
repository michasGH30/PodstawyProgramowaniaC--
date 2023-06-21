#include <iostream>

using namespace std;

int main()
{
    int a,count=0;
    cin>>a;
    while(a!=0)
    {
        if(a>10)
            count++;
        cin>>a;
    }
    if(a>10)
        count++;

    cout<<count;
    return 0;
}