/*  Password 902
Se puede con dos arreglos 
1. Tienes todas las palabras 
2. Arreglo con los contadores*/

#include <iostream>
#include <vector>
#include <math.h>
#define MAX 1000000
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int>P;
    vector<bool> B;
    B.resize(MAX+1, true);
    int pivote=2;
    while (pivote<=sqrt(MAX))
    {
    for (int i = pivote*2; i <MAX; i+=pivote)
        B[i]=false;
    for(pivote++; !B[pivote];pivote++);
    }

    for (int i=2; i<=MAX; i++){
        if(B[i]){
            P.push_back(i);
        }
        
    }
    cout<<P.size();
    return 0;
}
