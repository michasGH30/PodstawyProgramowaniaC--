#include <iostream>
#include <cstdlib>

using namespace std;

class Wektor
{
    int a, b, c;

public:
    Wektor()
    {
        a = 1;
        b = 2;
        c = 3;
    }
    Wektor(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    void wypisz()
    {
        cout << "Wektor o współrzędnych: a = " << a << " b = " << b << " c = " << c << '\n';
    }
    int retA()
    {
        return a;
    }
    int retB()
    {
        return b;
    }
    int retC()
    {
        return c;
    }
    void i_skalarny(Wektor w)
    {
        int i = a * w.retA() + b * w.retB() + c * w.retC();
        cout << "Iloczyn skalarny wektorów: [" << a << ", " << b << ", " << c << "] i [" << w.retA() << ", " << w.retB() << ", " << w.retC() << "] wynosi: " << i << '\n';
    }
    void i_wektorowy(Wektor w)
    {
        int x = b * w.retC() - c * w.retB();
        int y = c * w.retA() - a * w.retC();
        int z = a * w.retB() - b * w.retA();
        cout << "Iloczyn wektorowy wektorów: [" << a << ", " << b << ", " << c << "] i [" << w.retA() << ", " << w.retB() << ", " << w.retC() << "] wynosi: [" << x << ", " << y << ", " << z << "]" << '\n';
    }
};

int main()
{
    setlocale(LC_ALL, "Polish");
    Wektor w1 = Wektor();
    w1.wypisz();

    Wektor w2 = Wektor(5, 6, 7);
    w2.wypisz();

    w2.i_skalarny(w1);
    w2.i_wektorowy(w1);
    return 0;
}