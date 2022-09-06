#include <iostream>
#include <cmath>
#include <vector>
#define MAX 1000000
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> P;
    vector<bool> B;
    vector <int>D;
    D.resize(115,0);
    B.resize(MAX+1, true);
    int pivote = 2;
    while (pivote <= sqrt(MAX))
    {
        for (int i = pivote * 2; i < MAX; i+= pivote)
            B[i] = false;
        for (pivote++; !B[pivote]; pivote++);
    }
    for (int i = 2; i <= MAX; i++)
        if(B[i])
        P.push_back(i);
        int max=0;
        int l=2;
        int u=5;

        //El primero que sea true
        for (int i = l; i < B.size()-1; i++)
        {
            if(B[i]){
                l=i;
                break;
            }
        }
        //El ultimo primo antes de 
        for (int i = u; i >= 0; i--)
        {
            if(B[i]){
                u=i;
                break;
            }
            cout<<l<< "- "<<u<<endl;
        }
        
    for (int i = 0; i < P.size()-1; i++)
    {
        
        if(P[i]>=u){
            break;
        }
        if(P[i]>=l){
            int d=P[i+1]-P[i];
            D[d]++;
        }
    }

    int max2,im;
    bool empate=false;
    for (int i = 0; i < D.size(); i++){
        if(D[i]==max){
            empate=true;
        }
        if (D[i]>max){
            max=D[i];
            im=i;
            empate=false;
        }
    }
    if(empate){
        cout<<"Empate";
    }
    cout<<im;

}