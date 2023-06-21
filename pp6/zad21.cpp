#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Polish");
    srand(time(NULL));
    cout << "Program tworzący wektory liczb podzielnych przez 3\n";
    int tab[100][100];
    int n = 0;
    cout << "Podaj rozmiar tablicy(max 100): ";
    cin >> n;
    cout << "Po wylosowaniu:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            tab[i][j] = 20 * rand() / (RAND_MAX);
            cout << tab[i][j] << " ";
            if (tab[i][j] < 10)
                cout << " ";
        }
        cout << '\n';
    }
    cout << '\n';
    for (int j = 0; j < n; j++)
    {
        int suma = 0;
        for (int i = 0; i < n; i++)
        {
            if (tab[i][j] % 3 == 0)
                suma += tab[i][j];
        }
        cout << suma << " ";
        if (suma < 10)
            cout << " ";
    }
    return 0;
}