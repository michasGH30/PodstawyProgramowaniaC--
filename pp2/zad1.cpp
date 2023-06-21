#include <iostream>
#include <cstdlib>

using namespace std;

int suma_cyfr(int n)
{
    int suma = 0;
    while (n > 0)
    {
        suma += n % 10;
        n /= 10;
    }
    return suma;
}

int main()
{
    setlocale(LC_ALL, "Polish");
    int liczba;
    cout << "Podaj liczbę: ";
    cin >> liczba;
    int max_suma = suma_cyfr(liczba);
    int suma_obecna = -1;
    while (liczba != 0)
    {
        cout << "Podaj liczbę: ";
        cin >> liczba;
        suma_obecna = suma_cyfr(liczba);
        if (suma_obecna > max_suma)
        {
            max_suma = suma_obecna;
        }
    }
    cout << "Liczba o największej sumie cyfr to: " << max_suma;
    return 0;
}