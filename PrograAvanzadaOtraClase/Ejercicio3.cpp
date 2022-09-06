/*se tiene que checar. Leer pares de 
cadenas, se tiene que checar ssi
la prier cadena est  contenida en t*/

/*Si son diferentes avanza b, si son iguales 
avanzo los dos 
con que a llegue a al final significa que est  bien*/

#include <iostream>
#include <string>
using namespace std;


int main(int argc, char const *argv[])
{
    string s, t;
    int contador=0;
   // getline(cin,s);
    while (cin>>s>>t){
        int a=0,b=0;
        for(a=0, b=0; a<s.size() && b<t.size();b++){
            if (s[a]==t[b]){
                a++;
            }
        } 
        if(a==s.size()) // si est  contenida
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}


