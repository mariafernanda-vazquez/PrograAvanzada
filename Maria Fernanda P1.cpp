#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int casos;
    cin>>casos;
    string matricula;
    string espacio;
    getline(cin,espacio);
    while(getline(cin,matricula)){
        int total=0;
        int numero=0;
        int totalFinal=0;
        for (int i = 0; i < 3; i++)
        {
            float resta=matricula[i]-'A';
            float operacion=(resta*(pow(26,2-i)));
            total=total+operacion;
        }
        string numeros;
        numeros=matricula.substr(4,4);
        numero=stoi(numeros);
        totalFinal=abs(total-numero);
        if(totalFinal<=100){
            cout<<"REGIA"<<endl;
        }
        else{
            cout<<"NO REGIA"<<endl;
        }
    }
    
    
    
    return 0;
}
