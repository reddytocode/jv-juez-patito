#include <iostream>

using namespace std;

int main()
{
    int n, ant=1;
    while(cin >> n)
    {
    ant = 1;
    for(int i = 0; i<n;i++)
    {
        if(i==0) {

                ant = 1;
        }
        else{
            ant += ((3*i)+1);

        }

        cout << ant;
        if(i==(n-1))    cout << endl;
        else cout << " ";
    }
    }
    return 0;
}
