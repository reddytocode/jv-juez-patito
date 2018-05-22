#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n, monedas, d, cambiar;
    int v[100];
    while (true)
    {

        if(!cin.eof())
        {
            monedas = 0;

            cin >> n;
            for(int i = 1;i<= n; i++)
            {
                cin >> v[i];
            }
            cin >> cambiar;

            for(int i = n; i>0; i--)
            {

                monedas += cambiar/v[i];
                cambiar = cambiar%v[i];

            }
            if(cambiar>0)   cout << "-1" << endl;
            else cout << monedas << endl;
        }else break;
    }
    return 0;
}
