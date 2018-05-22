#include <iostream>

using namespace std;

int main()
{
    int n, tM, S, sComp=0, sD=0, sDS=0, sH = 0;
    int v[15][15];
    bool magico = true;
    cin >> n;
    while(n--)
    {
        cin >> tM;
        S = (tM*((tM*tM)+1))/2;
        sD=0, sDS=0;
        for(int i = 0; i<tM; i++)
        {
            sComp = 0;
            for(int j = 0; j<tM; j++)
            {
                cin >> v[i][j];
                sComp+=v[i][j];
                if(i==j)    {

                        sD+=v[i][j];
                        cout << "suma diagonal "<<sD << endl;
                }
                if((i+j)==tM)   sDS+=v[i][j];
            }
            if(sComp!=S)
            {
                cout << sComp<<endl;;
                magico = false;

            }
        }
        if((sDS!=S)or(sD!=S))   {
                cout << sDS << "y secundaria "<<sD<<endl;
                magico = false;

        }
        for(int j = 0; j<tM; j++)
        {   sH = 0;
            for(int i= 0; i<tM ; i++)
            {
                sH += v[i][j];
            }
            if(sH!=S) {  magico=false;
                    cout << sH << endl;
            }
        }

        if(magico)  cout << "S" << endl;
        else        cout << "N" << endl;
    }
    return 0;
}
