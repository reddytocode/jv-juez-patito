#include <iostream>
#include <sstream>

using namespace std;

void binario(int n)
{
    int i = 0;
    int v[8];
    while(n != 0)
    {
        v[i] =  n%2;
        n = n/2;
        i++;
    }

    if(i<8)
    {
        for(int j = 0; j<(8-i); j++)
        {
            cout << "0";
        }
    }

    for(int ind = i-1; ind>=0; ind--)
    {
        cout << v[ind];
    }
}


int main()
{
    int n;
    string s;
    getline(cin, s);

    for(int i = 0; i< s.size(); i++)
    {
        n = s[i];
        binario(n);
    }
    return 0;
}
