#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int casos,cont,num, contador;
    cin>>casos;
    vector<int> numeros;
    vector<int> restas;
    while(cin>>cont){
        for (int i = 0; i < cont; i++)
        {
            cin>>num;
            numeros.push_back(num);
            if((numeros[i]-numeros[i+1])){
                contador++;
            }
            else{
                break;
            }
            
        }
        
    }
    if(contador=(cont-1)){
            cout<<"perfecta";
        }
    
    
    
    return 0;
}