#include <iostream>
#include <sstream>
#include <vector>
#include <math.h>
using namespace std;


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

int busquedaBinaria(vector <int>arreglo, int tamano, int clave)
{
  int Iarriba = tamano-1;
  int Iabajo = 0;
  int Icentro;
  while (Iabajo <= Iarriba)
    {
      Icentro = (Iarriba + Iabajo)/2;
      if (arreglo[Icentro] == clave)
 return Icentro;
      else
 if (clave < arreglo[Icentro])
   Iarriba=Icentro-1;
 else
   Iabajo=Icentro+1;
    }
  return -1;
}

int main(){

    bool matPrima = true;
    vector <int>primos;
    primos = criba_eratostenes(1500);
    int r, c, add = 0;
    cin >> r >> c;
    int v[r][c];
    for(int i = 0; i< r; i++)
    {
        for(int j = 0; j<c; j++)
        {
            cin >> v[i][j];
            add+=v[i][j];
            if(busquedaBinaria(primos, primos.size(), v[i][j])==-1)    matPrima = false;
        }
    }
    if(busquedaBinaria(primos, primos.size(), r)==-1)    matPrima = false;
    if(busquedaBinaria(primos, primos.size(), c)==-1)    matPrima = false;
    if(busquedaBinaria(primos, primos.size(), add)==-1)    matPrima = false;
    if(matPrima)    cout <<"SI"<<endl;
    else cout << "NO" << endl;

    cout << busquedaBinaria(primos, primos.size(), 877);
    cout << busquedaBinaria(primos, primos.size(), 631);
    cout << busquedaBinaria(primos, primos.size(), (2*877*631));

    return 0;
}
