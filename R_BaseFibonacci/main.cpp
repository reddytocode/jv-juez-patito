#include <iostream>
#include <vector>

using namespace std;
int fibonacci(int n)
{
    if((n==1)or(n==0))
        return 1;
    else return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
    vector <int>v;
    int tope;
    cin >> tope;
    int n = 1;

    while(fibonacci(n) < tope)
    {
        v.push_back(fibonacci(n));
        n++;
    }

    for(int i = 0; i< v.size(); i++)
    {
        cout << v[i] <<"|";
    }

    return 0;
}
