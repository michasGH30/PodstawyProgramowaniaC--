#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>

using namespace std;

void ile(string nazwa)
{
    fstream plik;
    plik.open(nazwa.c_str(), ios::in);

    if(plik.good())
    {
        string temp;
        int i;
        while(!plik.eof())
        {
            i=0;
            getline(plik,temp);
            stringstream iss(temp);
            string token;
            while (getline(iss, token, ' '))
                i++;
            cout<<i<<endl;
        }
        plik.close();
    }
    else 
    {
        cout<<"Błąd pliku.\n";
    }
}

void intro()
{
    cout<<"Program obliczający ilośc wyrazów w danym pliku.\n";
    ile("zadanie12.txt");
}

int main()
{
    setlocale(LC_ALL,"Polish");
    intro();
    return 0;
}