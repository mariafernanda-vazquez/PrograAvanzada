/*
    José Manuel Gallegos Zúñiga 610750
    Maria Fernanda Vázquez Alanís 616683

    Código de Honor: Damos nuestra palabra de que hemos 
    realizado esta actividad con integridad académica.
*/

#include <iostream>
#include <time.h>
#include <cmath>
#include <string>
#include <vector>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{     
    int n1, n2, cont = 0;
    vector<int> P;
    vector<int> PC;
    vector<int> limB;

    while(cin >> n1 >> n2)
    {    
        limB.push_back(n2);

        if(n1 == 0)
            break; 

        if(n1 == 0 || n1 == 1)
            n1 = 2; 

        for(int i = n1; i <= n2; i++)
        {
            cont = 0;
            for(int j = 2; j <= i/2; j++)
            {
                if(i % j == 0 && i != 1)
                {
                    cont++;
                    break;
                }
            }
            if(cont < 1)
            {  
                P.push_back(i);
            }
        }
    }
    
    int count = 0;

    for(int j = 0; j < limB.size(); j++)
    {
        for(int i = 0; i < P.size(); i++)
        {
            if(abs(P[i+2] - P[i+1]) == abs(P[i+1] - P[i]))
            {
                cout << P[i] << " ";
                if(abs(P[i+2] - P[i+1]) == abs(P[i+1] - P[i]))
                {
                    cout << P[i]+(P[i+2] - P[i+1]) << " ";
                    if(abs(P[i+2] - P[i+1]) == abs(P[i+1] - P[i]) && abs(P[i+3] - P[i+2]) != abs(P[i+2] - P[i+1]))
                    {
                        cout << P[i]+(P[i+2] - P[i+1])*2 << " " << endl;
                        
                    } else if(abs(P[i+3] - P[i+2]) == abs(P[i+2] - P[i+1]) && abs(P[i+2] - P[i+1]) == abs(P[i+1] - P[i]))
                    {
                        cout << P[i]+(P[i+2] - P[i+1])*2 << " " << P[i]+(P[i+2] - P[i+1])*3 << " " << endl;
                    }
                }
            }
        }   
        break;
    }

    return 0;
}
