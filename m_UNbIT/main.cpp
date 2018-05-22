#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, x;
    long r;
    cin >> n;
    while(n--)
    {
        cin >> x;
        r = pow(2,(x-1)) ;
        cout << r << endl;

    }
    return 0;
}
