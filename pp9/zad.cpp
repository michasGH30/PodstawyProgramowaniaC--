#define _USE_MATH_DEFINES
#include<iostream>
#include<cmath>
#include<ctime>
#include<cstdlib>

using namespace std;

int intro()
{
	cout<<"Program przelicza wylosowane radiany na stopnie"<<endl;
	cout<<"Ilość elementów: ";
	int temp;
	cin>>temp;
	return temp;
}

void czytaj(float *t, int *n)
{
	for (int i=0;i<*n;i++)
	{
	    t[i]=rand()/(float)RAND_MAX *2*M_PI;
	}

}

void przelicz(float *t, int *n)
{
	cout<<"W stopniach: "<<endl;	
    for (int i=0;i<*n;i++)
    {
        float x=180*t[i]/M_PI;
        cout<<x<<endl;
    }

}

void pisz(float *t, int *n)
{
	cout<<"Wylosowane liczby w radianach: "<<endl;
	for (int i=0;i<*n;i++)
	{
	    cout<<t[i]<<endl;
	}
    cout<<'\n';
}

int main()
{
	srand(time(NULL));
    setlocale(LC_ALL,"Polish");
    int n;
    float *tab;
    n = intro();
    tab = new float [n];
	czytaj(tab,&n);
	pisz(tab, &n);
	przelicz(tab, &n);
    delete [] tab;
	return 0;
}