#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void show(int **t, int *n)
{
    for(int i = 0; i < *n; i++)
    {
        for(int j = 0; j < *n; j++)
        {
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}

void complete(int **t, int *n)
{
    for(int i = 0; i < *n; i++)
        for(int j = 0; j < *n; j++)
            t[i][j] = rand() % 10;
}

void add(int **t1, int **t2, int** w, int *n)
{
    for(int i = 0; i < *n; i++)
        for(int j = 0; j < *n; j++)
            w[i][j] = t1[i][j] + t2[i][j];
}

int main()
{
    setlocale(LC_ALL,"Polish");
    srand(time(NULL));
    int n = 0;
    int **t1, **t2, **w;
    cout<<"Podaj rozmiar N kwadratowej macierzy: ";
    cin >> n;
    t1 = new int* [n];
    for(int i = 0; i < n; i++)
        t1[i] = new int [n];
    t2 = new int* [n];
    for(int i = 0; i < n; i++)
        t2[i] = new int [n];
    w = new int* [n];
    for(int i = 0; i < n; i++)
        w[i] = new int [n];

    complete(t1, &n);
    complete(t2, &n);
    show(t1, &n);
    cout<<endl;
    show(t2, &n);
    cout<<endl;

    add(t1, t2, w, &n);
    show(w, &n);

    for(int i = 0; i < n; i++)
        delete [] t1[i];
    delete [] t1;

    for(int i = 0; i < n; i++)
        delete [] t2[i];
    delete [] t2;

    for(int i = 0; i < n; i++)
        delete [] w[i];
    delete [] w;
    return 0;
}