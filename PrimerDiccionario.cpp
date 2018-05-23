#include <ctype.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

string toLower(string str)
{
    int t = str.size();
    char c;
    for(int i = 0; i< t; i++)
    {
        c= str[i];
        str[i] = tolower(c);
    }
    return str;
}

int main()
{
    vector <string> cadenas;
    string get;
    vector <string> diccionario;
    string dato;
    while(getline(cin,get))
    {
        get = toLower(get);
        for(int i= 0;i<get.size(); i++)
        {
            if(!((get[i]>=97)and(get[i]<=122)))  get[i] =' ';
        }
        cadenas.push_back(get);
        istringstream is(get);
        while( is >> dato ) {
            diccionario.push_back(dato);
        }
    }
    sort(diccionario.begin(), diccionario.end());
    cout << diccionario[0]<<endl;
    for(int i = 1; i< diccionario.size(); i++)
    {
        if(diccionario[i]!=diccionario[i-1])    cout << diccionario[i]<<endl;;
    }
    return 0;
}
