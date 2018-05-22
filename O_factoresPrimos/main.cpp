#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void mostrar_criba(vector<int> criba)
{
    cout << endl;

    for (int i = 0; i < criba.size(); i++)
        cout << criba[i] << "\t";

    cout << endl;

}

vector<int> criba_eratostenes(int n)
{
    vector<int> criba;
    int current_primo;

    for (int i = 2; i <= n; i++)
        criba.push_back(i);

    if (n == 2 || n == 3)
        return criba;


    vector<int>::iterator it = criba.begin();

    current_primo = *it;

    do
    {
        vector<int>::iterator it2 = it + 1;

        for(; it2 <= criba.end(); it2++)
            if(*it2 % current_primo == 0)
                criba.erase(it2);

        it++;
        current_primo = *it;

    } while (pow(current_primo, 2) < n);

    return criba;
}

int main()
{
    int a,b, facPrimos, j;
    int numeroMayor, cantidad, cantidadMayor = -999;
    int cont;

    cin >> a >> b;
    int n;
    vector<int> primos;

    primos = criba_eratostenes(b);


    for(int index= a; index <= b; index++)
    {
        cont = 0;
        facPrimos = 0;
        while(true)
        {

            if(primos[cont]<=b)
            {
                if(index%primos[cont] == 0){facPrimos++;}

                cont++;

                if(facPrimos>cantidadMayor){

                    numeroMayor = index;
                    cantidad = facPrimos;
                }

            }else break;
        }
    }
    cout << numeroMayor<<" conFIN "<<cantidad<< endl;
    return 0;
}
