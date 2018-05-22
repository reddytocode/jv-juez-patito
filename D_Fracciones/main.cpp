#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    double r1, r2;
    while(true)
    {
        cin >> a >> b >> c >> d;
        if((a == 0)and(b == 0)and(c == 0)and(d == 0))
        {
            break;
        }else
        {
            if((a != 0)or(b != 0)or(c != 0)or(d != 0)) {
                r1 = a/b;
                r2 = c/d;
                if (r1 == r2)
                {
                    cout << "=" << endl;
                }else{
                    cout << "!=" << endl;
                }
            }
        }
    }

    return 0;
}
