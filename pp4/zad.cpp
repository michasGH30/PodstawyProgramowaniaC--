#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Polish"); 
    string ciag;
    getline(cin, ciag);
    int male = 0;
    int duze = 0;
    int ileA = 0;
    for(int i = 0; i < ciag.length(); i++)
    {
        if((int)ciag[i]==97)
            ileA++;
        if((int)ciag[i]>=97 && (int)ciag[i]<=122)
            male = 1;
        else if((int)ciag[i]>=65 && (int)ciag[i]<=90)
            duze = 1;
    }
    if(male == 1 && duze == 1)
        cout<<"Ciąg znaków mieszanych";
    else if(male == 1 && duze == 0)
    {
        cout<<"Było "<<ileA<<" małych liter a";
    }
    else if(male == 0 && duze == 1)
    {
        cout<<"Ciąg dużych liter";
    }
    return 0;
}