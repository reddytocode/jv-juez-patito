#include <iostream>
#include <vector>
#include <sstream>
#include <math.h>
using namespace std;

int dec(string bin)
{

    int decimal= 0;
    for(int i = 7; i>=0; i--)
    {
        if(bin[7-i]=='1')   decimal+=pow(2,i);
    }
    return decimal;
}
int main()
{
    string s = "010010000110111101101100011000010010000001101101011101010110111001100100011011110010000001101000001100010011001000110011";
    for(int i=0; i< s.size();i+=8)
    {
        cout << dec(s.substr(i,7)) << endl;
        cout << (char)dec(s.substr(i,7))<<endl;
    }


    return 0;
}
