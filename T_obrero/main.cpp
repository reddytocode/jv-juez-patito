#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int sueldo, dias, inicio;
    int coef = 0;
    cin >> sueldo >> dias;
    for(int i = 0; i< dias; i++)
    {
        coef += pow(2,i);
    }
    inicio = sueldo/coef;
    for(int i = 0; i < dias; i++)
    {
        cout <<(inicio*pow(2,i));
        if(i!=(dias-1)) cout << "+";
        else cout << "="<<sueldo<<endl;
    }

    return 0;
}
