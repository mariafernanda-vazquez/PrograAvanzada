#include <iostream>
#include <vector>
#include <sstream>
#include <bitset>

using namespace std;
int main(int argc, char const *argv[])
{
    string C="A79C";
    
    int masIzq=60;
    int masDer=30;
    string izq=C.substr(0,2);
    string der=C.substr(2,5);
    int izquierda;
    int derecha;
    double resultadoI;
    double resultadoD;

    stringstream(izq)>>hex>>izquierda;
    stringstream(der)>>hex>>derecha;
    double izq2=izquierda;
    double der2=derecha;
    resultadoI=(izq2+((masIzq*izq2)/100));
    izquierda=resultadoI;
    resultadoD=(der2+((masDer*der2)/100));
    derecha=resultadoD;
    
    if (izquierda>255){
        izquierda=255;
    }if (derecha>255){
        derecha=255;
    }
    bitset<16> B(izquierda);
    B=B<<8;
    bitset<16> D(derecha);
    cout<<(B|D).to_ulong()<<endl;
    return 0;
}
