#include <iostream>

using namespace std;

int main()
{

    string T;
    char carac;
    getline(cin, T);
    cin >> carac;
    for(int i = 0; i< T.size(); i++)
    {
        if((char)T[i]==carac)
            cout << i << endl;
    }

    return 0;
}
