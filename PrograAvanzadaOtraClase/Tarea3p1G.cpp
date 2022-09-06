#include <iostream>
#include <vector>
#include <string>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    float izq;
    float der;
    int segundos=1028;
    float raiz;
    raiz=sqrt(segundos);
    int intRaiz=ceil(raiz);
    float residuo;
    residuo=raiz-floor(raiz);

    if (intRaiz%2==0 && residuo==0){
        izq=intRaiz;
        der=1;
    }
    else if (intRaiz%2==1 && residuo==0){
        der=intRaiz;
        izq=1;
    }
    else if(residuo>.50 && intRaiz%2==1){
        der=ceil(raiz);
        izq=pow(ceil(raiz),2)-(segundos-1);
    }

    else if(residuo<.50 && intRaiz%2==1){
        izq=ceil(raiz);
        der=abs(pow(floor(raiz),2)-(segundos));
    }

    else if(residuo>.50 && intRaiz%2==0){
        izq=ceil(raiz);
        der=pow(ceil(raiz),2)-(segundos-1);
    }
    else if(residuo<.50 && intRaiz%2==0){
        der=ceil(raiz);
        izq=abs(pow(floor(raiz),2)-(segundos));
    }

    cout<<izq<<endl;
    cout<<der;

    
    

    //cout<<segundos;
    return 0;
}