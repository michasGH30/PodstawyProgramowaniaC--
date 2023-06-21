#include <iostream>

using namespace std;

int main()
{
    int w,h,border,inside;
    cin>>w>>h>>border>>inside;
    for(int i = 0; i < h; i ++)
    {
        for(int j = 0; j < w; j++)
        {
            if(i == 0 || i == h-1)
                cout<<border;
            else if(j == 0 || j == w-1)
                cout<<border;
            else 
                cout<<inside;
        }
        cout<<'\n';
    }
    return 0;
}