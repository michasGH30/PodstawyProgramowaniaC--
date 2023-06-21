#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
// a = -10.0+20.0*rand()/(RAND_MAX);
int main()
{
    setlocale(LC_ALL, "Polish");
    srand(time(NULL));
    cout << "Program obliczający różne średnie w tablicy\n";
    int tab[100][100];
    int n = 0;
    cout << "Podaj rozmiar tablicy(max 100): ";
    cin >> n;
    cout << "Po wylosowaniu:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            tab[i][j] = 10 * rand() / (RAND_MAX);
            cout << tab[i][j] << " ";
        }
        cout << '\n';
    }
    float cala_tablica = 0;
    float przekatna = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                przekatna += tab[i][j];
            cala_tablica += tab[i][j];
        }
    }
    cout << "Średnia całej tablicy: " << cala_tablica / (n * n) << "\n\n";
    cout << "Średnia głównej przekątnej: " << przekatna / n << "\n\n";
    for (int i = 0; i < n; i++)
    {
        float wiersz = 0;
        for (int j = 0; j < n; j++)
        {
            wiersz += tab[i][j];
        }
        cout << "Średnia wiersza: " << wiersz / n << '\n';
    }
    cout << '\n';
    for (int j = 0; j < n; j++)
    {
        float kolumna = 0;
        for (int i = 0; i < n; i++)
        {
            kolumna += tab[i][j];
        }
        cout << "Średnia kolumny: " << kolumna / n << '\n';
    }
    return 0;
}