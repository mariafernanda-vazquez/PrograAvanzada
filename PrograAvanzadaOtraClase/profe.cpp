#include <iostream>
#include <cmath>
#include <vector>
#define MAX 100000000
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> P; //Numeros Primos
    vector<bool> B;
    vector<int>restas;
    B.resize(MAX+1, true);
    int pivote = 2;
    while (pivote <= sqrt(MAX))
    {
        for (int i = pivote * 2; i <= MAX; i+= pivote)
            B[i] = false;
        for (pivote++; !B[pivote]; pivote++);
    }
    for (int i = 2; i <= MAX; i++)
    {
        if(B[i])
            P.push_back(i);
    }


    cout << endl << "Hay " << P.size() << " primos" << endl;
    return 0;
}