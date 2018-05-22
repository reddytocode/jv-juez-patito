#include <ctype.h>
#include <iostream>
#include <vector>

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
int main ()
{

  string s, buscar;
  getline(cin, s);
  cin >> buscar;
  s=toLower(s);
  buscar = toLower(buscar);
  int intervalos = buscar.size();
  for(int i= 0; i< s.size()-intervalos; i++)
  {
      if(buscar == s.substr(i,intervalos))   cout << i<<endl;
  }
}
