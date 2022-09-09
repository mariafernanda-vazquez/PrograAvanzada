#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
        int casos;
        cin>>casos;
        int numero;
        while(cin>>numero){
        string numeroString;
       int  resultado=(((((numero*567)/9)+7492)*235)/47)-498;
       numeroString=to_string(resultado);
       cout<<numeroString[numeroString.size()-2]<<endl;
        }
        
        return 0;
}
