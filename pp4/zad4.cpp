#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Polish"); 
    string s1 = "Ala ma kota";
    for(int i = 0; i < s1.length(); i++)
    {
        if((int)s1[i] == 32)
        {
            s1[i]='*';
        }
            
    }
    cout<<s1<<endl;

    string s2 = "Ala ma kota i jest biały";
    int ile = 0;
    for(int i = 0; i <s2.length(); i++)
    {
        if(s2[i] == ' ')
            ile++;
    }
    for(int j = 0; j < ile; j++)
    {
        for(int i = 0; i < s2.length(); i++)
        {
            if(s2[i] == ' ')
            {
                s2[i] = s2[i+1];
                s2[i+1] = ' ';
            }
        }
    }
    cout<<s2;
    return 0;
}