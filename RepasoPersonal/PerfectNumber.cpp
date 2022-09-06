#include "iostream"
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int numero;
    cout<<"ingresa el numero";
    cin>>numero;
    vector<int>numeros;
    for(int i=1;i<numero; i++){
        if (numero%i==0){
           numeros.push_back(i);
        }

    }
    int suma=0;
    for(int j=0;j<numeros.size();j++){
        cout<<numeros[j];
        suma+=numeros[j];

    }
    cout<<suma;
    if (suma==numero){
        cout<<"si es perfecto";
    }
    

    
    return 0;
}
