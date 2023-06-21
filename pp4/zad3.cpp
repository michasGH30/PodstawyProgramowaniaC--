#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Polish"); 
    int z;
    z = getch();
    while(z!=42)
    {
        if(z >=97 && z <= 122)
            cout<<"mała litera";
        else 
        {
            if(z >= 65 && z <= 90)
                cout<<"duża litera"; 
            else 
            {
                if(z >= 48 && z <= 57)
                    cout<<"cyfra";
                else 
                {
                    if(z == 27)
                        cout<<"Klawisz ESC";
                    else 
                    {
                        if(z == 13)
                            cout<<"Klawisz ENTER";
                        else 
                        {
                            if(z == 0)
                            {
                                z = getch();
                                if(z == 60)
                                    cout<<"Klawisz F2";
                                else if(z == 75)
                                    cout<<"<-";
                                else if(z == 77)
                                    cout<<"->";
                                else 
                                {
                                    cout<<"Inny klawisz";
                                }
                            }
                        }
                    }
                }
            }       
        }           
        cout<<endl;
        z = getch();
    }
    return 0;
}