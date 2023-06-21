#include <iostream>
#include <cstdlib>

using namespace std;

struct Osoba
{
    string nazwisko;
    float brutto;
    int rok;
};

bool jest_juz_rok(int *r, Osoba o, int ile)
{
    bool jest = false;
    for (int i = 0; i < ile; i++)
    {
        if (r[i] == o.rok)
        {
            jest = true;
        }
    }
    return jest;
}

int *dodaj_rok(int *tab, Osoba o, int ile_r)
{
    int *temp = new int[ile_r];
    for (int i = 0; i < ile_r; i++)
    {
        temp[i] = tab[i];
    }
    tab = new int[ile_r + 1];
    for (int i = 0; i < ile_r; i++)
    {
        tab[i] = temp[i];
    }
    tab[ile_r] = o.rok;
    return tab;
}

int *tablica_roki(Osoba *o, int ile)
{
    int *tab = new int[1];
    int ile_r = 1;
    for (int i = 0; i < ile; i++)
    {
        if (i == 0)
        {
            tab[0] = o[i].rok;
        }
        else
        {
            bool jest = jest_juz_rok(tab, o[i], ile_r);
            if (!jest)
            {
                tab = dodaj_rok(tab, o[i], ile_r);
                ile_r++;
            }
        }
    }
    return tab;
}

int *ilosc_rok(int *r, Osoba *o, int ile)
{
    int licznik = sizeof(r) / sizeof(int) + 1;
    int *ilosc = new int[licznik];
    for (int i = 0; i < licznik; i++)
    {
        ilosc[i] = 0;
    }
    for (int i = 0; i < ile; i++)
    {
        for (int j = 0; j < licznik; j++)
        {
            if (r[j] == o[i].rok)
            {
                ilosc[j] = ilosc[j] + 1;
            }
        }
    }
    return ilosc;
}

int rok_najmniej(int *roki)
{
    int licznik = sizeof(roki) / sizeof(int) + 1;
    int max_r = roki[0];
    int indeks = 0;
    for (int i = 1; i < licznik; i++)
    {
        if (roki[i] < max_r)
        {
            max_r = roki[i];
            indeks = i;
        }
    }
    return indeks;
}

void wypisz(Osoba *o, int ile, int rok)
{
    for (int i = 0; i < ile; i++)
    {
        if (o[i].rok == rok)
        {
            cout << o[i].nazwisko << " " << o[i].brutto << " " << o[i].rok << endl;
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Polish");
    Osoba *osoby = new Osoba[6];
    int ile = 6;
    uzupelnij(osoby, ile);
    int *r = tablica_roki(osoby, ile);
    int *ilosc = ilosc_rok(r, osoby, ile);
    int min_r = rok_najmniej(ilosc);
    wypisz(osoby, ile, r[min_r]);
    return 0;
}