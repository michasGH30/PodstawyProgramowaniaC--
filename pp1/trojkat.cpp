#include <iostream>

using namespace std;

int main()
{
    int border,inside, size;
    cin>>size>>border>>inside;
    for(int i = 0; i <= size; i++)
    {
        for(int j = 0; j < i; j++)
        {
            if(i == 0 || i == size)
                cout<<border;
            else if(j == 0 || j == i-1)
                cout<<border;
            else
                cout<<inside;
        }
        cout<<endl;

    }
    return 0;
}