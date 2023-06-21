#include <iostream>

using namespace std;

int main()
{
    int a,b,sum=0,x;
    cin>>a>>b>>x;
    while(x!=1000)
    {
        if(x>=a && x < b)
            sum+=x;
        cin>>x;
    }
    if(x>=a && x < b && x!=1000)
            sum+=x;
    cout<<sum;
    return 0;
}