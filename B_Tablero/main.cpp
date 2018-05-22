#include <iostream>

using namespace std;

int main()
{
    int n, r, c, d, monedas;
    cin >> n;
    while(n--)
    {
        monedas = 0;
        cin >> r >> c;
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                cin >> d;
                if((i+j)%2 == 0)    monedas+=d;
            }

        }

        cout << monedas << endl;
    }
    return 0;
}
