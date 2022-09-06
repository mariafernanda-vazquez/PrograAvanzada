#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int num, raiz;
    string espacio;
    string palabra;
    
    cin>>num;
    cout<<num;
    getline(cin,palabra);
    for(int i=0;i<num;i++){
        getline(cin,palabra);
        raiz=(int)sqrt(palabra.size());
        cout<<raiz;
        if (sqrt(palabra.size())==raiz){
            cout<<"Valid"<<endl;
            cout<<palabra<<endl;
            for (int b = 0; b < raiz; b++)
                {
            for(int a=b ;a<raiz*raiz;a+=raiz){
            cout<<palabra[a]<<endl;
        }
                }
        }
        else 
        cout<< "Invalid";        
    //}
    /*else{
       cout<<"INVALID"<<endl;
    }
    }*/
    return 0;
}
}


