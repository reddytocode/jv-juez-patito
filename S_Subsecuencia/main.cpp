#include <iostream>
#include <sstream>
using namespace std;

int main()
{

    string str, a, b;
    while(getline(cin, str))
    {

        if(str!="")
        {


            istringstream is( str );
            is >> a;
            is >> b;
            int j = 0;
            bool encA[a.size()];
            for(int i = 0; i<b.size(); i++)
            {
                if(a[j]==b[i]){
                encA[j] = true;
                j++;
                }
            }
            int n = a.size();
            bool sep = a[0];
            for(int i = 1; i< n; i++)
            {
                sep = sep and encA[i];
            }

            if(sep) cout << "SEP" << endl;
            else cout << "NOP" << endl;
        }

    }
    return 0;
}
