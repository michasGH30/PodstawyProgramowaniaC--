#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>

using namespace std;

struct Osoba
{
    char miejscowosc[30];
    char nazwisko[20];
    float brutto;
};

void odczytaj()
{
    Osoba o;
    fstream plik;
    plik.open("baza_danych.dat", ios::binary | ios::in);
    do
    {
        plik.read(reinterpret_cast<char *>(&o), sizeof(o));
        if (!plik.eof())
        {
            cout << o.miejscowosc << " " << o.nazwisko << " " << o.brutto << '\n';
        }
    } while (!plik.eof());
    plik.close();
}

bool jest_juz_miasto(string *m, int ile, Osoba o)
{
    for (int i = 0; i < ile; i++)
    {
        if (m[i] == o.miejscowosc)
        {
            return true;
        }
    }
    return false;
}

void dodaj_miasto(string *m, int ile, Osoba o)
{
    string *temp = new string[ile];
    for (int i = 0; i < ile; i++)
    {
        temp[i] = m[i];
    }
    m = new string[ile + 1];
    for (int i = 0; i < ile; i++)
    {
        m[i] = temp[i];
    }
    m[ile] = o.miejscowosc;
}

string *miasta()
{
    string *m;
    int i = 0;
    Osoba o;
    fstream plik;
    int ile = 0;
    plik.open("baza_danych.dat", ios::binary | ios::in);
    do
    {
        plik.read(reinterpret_cast<char *>(&o), sizeof(o));
        if (!plik.eof())
        {
            if (i == 0)
            {
                m = new string[1];
                m[0] = o.miejscowosc;
                i++;
                ile++;
            }
            else
            {
                bool jest = jest_juz_miasto(m, ile, o);
                if (!jest)
                {
                    dodaj_miasto(m, ile, o);
                    ile++;
                }
            }
        }
    } while (!plik.eof());
    plik.close();
    for (int i = 0; i < ile; i++)
    {
        cout << m[i] << " ";
    }
    return m;
}

int main()
{
    setlocale(LC_ALL, "Polish");
    // odczytaj();
    string *m = miasta();
    return 0;
}