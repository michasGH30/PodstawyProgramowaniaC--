#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void show(int **tab, int w, int h)
{
    for(int i = 0; i < w; i++)
    {
        for(int j = 0; j < h; j++)
            cout<<tab[i][j] << " ";
        cout<<endl;
    }
}

void mulMatrix(int **t1, int m, int k1, int **t2, int k2, int n, int **w, int* possible)
{
    if(k1!=k2)
    {
        *possible = -1;
    }
    else 
    {
        *possible = 1;
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++) 
                w[i][j] = 0;
      
        
        for(int k=0; k<m; k++)
            for(int l=0; l<k2; l++)
                for(int m=0; m<k1; m++)
                    w[k][l]+=t1[k][m]*t2[m][l];
    }
}

int main()
{
    setlocale(LC_ALL,"Polish");
    srand(time(NULL));
    int m,k1,k2,n;
    int **t1;
    int **t2;
    int **w;
    int p = 0;
    cout<<"Podaj ilość wierszy 1 macierzy: ";
    cin>>m;
    cout<<"Podaj ilość kolumn 1 macierzy: ";
    cin>>k1;
    cout<<"Podaj ilość wierszy 2 macierzy: ";
    cin>>k2;
    cout<<"Podaj ilość kolumn 2 macierzy: ";
    cin>> n;

    t1 = new int* [m];
    for(int i = 0; i < m; i++)
        t1[i] = new int [k1];

    t2 = new int* [k2];
    for(int i = 0; i < k2; i++)
        t2[i] = new int [n];

    for(int i = 0; i < m; i++)
        for(int j = 0; j < k1; j++)
            t1[i][j] = rand() % 10;

    for(int i = 0; i < k2; i++)
        for(int j = 0; j < n; j++)
            t2[i][j] = rand() % 10;

    show(t1, m, k1);
    cout<<endl;
    show(t2, k2, n);
    cout<<endl;

    if(k1 == k2)
    {
        w = new int* [m];
        for(int i = 0; i < m; i++)
            w[i] = new int [m];
    }

    mulMatrix(t1, m, k1, t2, k2, n, w, &p);
    if(p == 1)
        show(w, m, m);
    else if( p == -1)
        cout<<"Nie można pomnożyć macierzy";
    for(int i=0;i< m;i++)// zwolnienie pamięci
        delete []t1 [i]; 
    delete []t1;

    for(int i=0;i< k1;i++)// zwolnienie pamięci
        delete []t2 [i]; 
    delete []t2;

    if(p == 1)
    {
        for(int i=0;i< m;i++)// zwolnienie pamięci
            delete []w [i]; 
        delete [] w;
    }
    
    return 0;
}