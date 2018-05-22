#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main(int argc, char** argv){


    int n, iz, der, dato, suma;
    vector <int>v;
    string s;
    cin >> n;
    while(n--)
    {
        v.clear();
        suma = 0;
        cin >> iz >> der;
        cin.ignore();

        getline(cin,s);
        istringstream isstream(s);
        stringstream ss;

        while(!isstream.eof()){

            isstream >> dato;
            v.push_back(dato);
        }

        for(int i = iz; i<=der; i++)
        {
            suma+=v[i];
        }
        cout << suma << endl;
    }
    return 0;
}
