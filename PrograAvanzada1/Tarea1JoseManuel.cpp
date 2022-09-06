#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    const int N=5;
    string S[N];
    string name;
    int X[N], Y[N], Z[N], T[N];
    int min, sec, ms;
    int a=0;
    int n=0;
    
    while(cin>>n)
    {
        for(int i = 0; i < N; i++)
        {        
            cin >> name;

            S[i] = name;
            
            string l;
            
            cin >> l >> min >> l >> sec >> l >> ms >> l;
            X[i] = min, Y[i] = sec, Z[i] = ms;

            T[i] = (X[i] * 60000) + (Y[i] * 1000) + Z[i];
        

        int aux;
        string aux2;
        for(int i = 0; i < N; i++)
        {
            for(int j = i+1; j < N; j++)
            {
                if(T[i] > T[j])
                {
                    aux = T[i];
                    T[i] = T[j];
                    T[j] = aux;

                    aux2 = S[i];
                    S[i] = S[j];
                    S[j] = aux2;
                }
            }
            if(a==0){
                cout << S[i] << endl;
            }
        }
        cout << endl;
    }

    return 0;
}