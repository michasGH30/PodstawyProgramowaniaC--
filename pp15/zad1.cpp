#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

class Punkt
{
    int x, y;

public:
    Punkt()
    {
        x = 5;
        y = 5;
    }
    Punkt(int xK, int yK)
    {
        x = xK;
        y = yK;
    }
    void wypisz()
    {
        cout << "Punkt: x = " << x << " y = " << y << '\n';
    }
    void przesun(int xp, int yp)
    {
        x += xp;
        y += yp;
    }
    int retX()
    {
        return x;
    }
    int retY()
    {
        return y;
    }
    void oblicz_odleglosc(Punkt p)
    {
        float d = sqrt(pow(x - p.retX(), 2) + pow(y - p.retY(), 2));
        cout << "Dystans między punktami P1: x = " << x << " y = " << y << " i P2: x = " << p.retX() << " y = " << p.retY() << " wynosi: " << d << '\n';
    }
};

int main()
{
    setlocale(LC_ALL, "Polish");
    Punkt p1 = Punkt();
    p1.wypisz();
    p1.przesun(-1, 2);
    p1.wypisz();

    Punkt p2 = Punkt(10, -5);
    p2.wypisz();
    p2.oblicz_odleglosc(p1);
    return 0;
}