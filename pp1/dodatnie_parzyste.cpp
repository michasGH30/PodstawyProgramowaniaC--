#include <iostream>

using namespace std;

int main()
{
    int x, count=0;
    cin>>x;
    while(x!=0)
    {
        if(x>0 && x%2==0)
            count++;
        cin>>x;
    }
    if(x>0 && x%2==0 && x!=0)
            count++;
    cout<<count;
    return 0;
}