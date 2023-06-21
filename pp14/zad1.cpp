#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>

using namespace std;

struct pracownik
{
    string imie;
    string nazwisko;
    float wzrost;
};

void intro(string nazwaT, string nazwaB)
{
    pracownik pracownicy[4];
    fstream plik;
    plik.open(nazwaT.c_str(), ios::in);
    int j;
    for (int i = 0; i < 4; i++)
    {
        string temp;
        j = 0;
        getline(plik, temp);
        stringstream iss(temp);
        string token;
        while (getline(iss, token, ','))
        {
            switch (j)
            {
            case 0:
                pracownicy[i].imie = token;
                break;
            case 1:
                pracownicy[i].nazwisko = token;
                break;
            case 2:
                float w;
                istringstream(token) >> w;
                pracownicy[i].wzrost = w;
                break;
            }
            j++;
        }
    }

    plik.close();

    cout << "Przed posortowaniem:\n";

    for (int i = 0; i < 4; i++)
    {
        cout << pracownicy[i].imie << " " << pracownicy[i].nazwisko << " " << pracownicy[i].wzrost << '\n';
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if ((int)pracownicy[j].nazwisko[0] > (int)pracownicy[j + 1].nazwisko[0])
            {
                swap(pracownicy[j], pracownicy[j + 1]);
            }
        }
    }

    plik.open(nazwaB.c_str(), ios::binary | ios::out);

    cout << "\nPo posortowaniu:\n";

    for (int i = 0; i < 4; i++)
    {
        cout << pracownicy[i].imie << " " << pracownicy[i].nazwisko << " " << pracownicy[i].wzrost << '\n';
        plik.write(reinterpret_cast<char *>(&pracownicy[i]), sizeof(pracownicy[i]));
    }

    plik.close();

    cout << "\nSprawdzenie pliku:\n";

    pracownik p;
    plik.open(nazwaB.c_str(), ios::binary | ios::in);

    for (int i = 0; i < 4; i++)
    {
        plik.read(reinterpret_cast<char *>(&p), sizeof(p));
        cout << p.imie << " " << p.nazwisko << " " << p.wzrost << '\n';
    }

    p.~pracownik();

    plik.close();
}

int main()
{
    setlocale(LC_ALL, "Polish");
    intro("zadanie1.txt", "zadanie1.dat");
    return 0;
}