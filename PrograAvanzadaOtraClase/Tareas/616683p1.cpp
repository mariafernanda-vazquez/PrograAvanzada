/*
    José Manuel Gallegos Zúñiga 610750
    Maria Fernanda Vazquez 616683

    Código de Honor: Damos nuestra palabra de que hemos 
    realizado esta actividad con integridad Académica.
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int n1,n2,n3,n4,resultado;
    while(cin >> n1 >> n2 >> n3 >> n4) {
        if(n1==0 && n2==0 && n3==0 && n4==0) 
            break;
        resultado=0;
        if(n1<n2) 
            resultado+=40-(n2-n1);
        else 
            resultado+= n1-n2;
        if(n2>n3) 
            resultado+=40-(n2-n3);
        else 
            resultado+= n3-n2;
        if(n3<n4) 
            resultado+=40-(n4-n3);
        else resultado+=n3-n4;
        cout << 1080+(resultado*9)<<endl;
    }
    return 0;
}
    
