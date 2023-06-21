#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Polish");
    srand(time(NULL));
    float a,b,c;
    a = -10.0+20.0*rand()/(RAND_MAX);
    b = -10.0+20.0*rand()/(RAND_MAX);
    c = -10.0+20.0*rand()/(RAND_MAX);

    cout<<"a = "<<a<<" b = "<<b<<" c = "<<c<<'\n';
    float delta = pow(b,2)-4*a*c;
    if(delta >= 0)
    {
        delta = sqrt(pow(b,2)-4*a*c);
        float x1 = (b*(-1)+delta)/(2*a);
        float x2 = (b*(-1)-delta)/(2*a);
        cout<<"x1 = "<<x1<<" x2 = "<<x2;
    }
    
    return 0;
}