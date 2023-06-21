#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int podaj_n()
{
    cout << "Podaj n: ";
    int n = -1;
    cin >> n;
    return n;
}

int podaj_m()
{
    cout << "Podaj m: ";
    int m = -1;
    cin >> m;
    return m;
}

float **utworz_tablice(int n, int m)
{
    float **temp = new float *[n];
    for (int i = 0; i < n; i++)
    {
        temp[i] = new float[m];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            temp[i][j] = rand() / (float)RAND_MAX * 10.0;
        }
    }
    return temp;
}

float srednia_tablicy(float **tab, int n, int m)
{
    float s = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            s += tab[i][j];
        }
    }
    s /= (float)(n * m);
    return s;
}

int ile_powyzej_sredniej(float **tab, int n, int m, float s)
{
    int ile = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (tab[i][j] > s)
            {
                ile++;
            }
        }
    }
    return ile;
}

void przepisz(float **tab, int n, int m, float s, float *powyzej)
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (tab[i][j] > s)
            {
                powyzej[k] = tab[i][j];
                k++;
            }
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Polish");
    srand(time(NULL));
    int n = podaj_n();
    int m = podaj_m();
    float **tab = utworz_tablice(n, m);
    float srednia = srednia_tablicy(tab, n, m);
    int ile = ile_powyzej_sredniej(tab, n, m, srednia);
    float *powyzej = new float[ile];
    przepisz(tab, n, m, srednia, powyzej);
    return 0;
}