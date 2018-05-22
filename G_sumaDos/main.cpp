#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, d, buscar, dato;
    vector <int>v;
    while(!cin.eof())
    {
        v.clear();
        cin >> n;
        cin >> dato;
        bool encontrado = false;
        for(int i = 0; i< n; i++)
        {
            cin >> d;
            v.push_back(d);
        }
        sort(v.begin(), v.end());

        for(int i = 0; i< n; i++)
        {
            if(encontrado)  break;
            buscar = dato - v[i];
            for(int j = i+1; j <n; j++)
            {
                if(v[j] == buscar)
                {
                    cout << v[i] << " " << v[j] << endl;
                    encontrado = true;
                break;
                }
            }
        }
        if(!cin.eof())  if(!encontrado) cout << "-1" << endl;

    }
    return 0;
}
