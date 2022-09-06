#include <iostream>
#include <vector>
#include <sstream>
#include <bitset>


using namespace std;
int main(int argc, char const *argv[])
{
    int total;
    cin>>total;
    int C;
    int masIzq;
    int masDer;
    while(cin>>C>>masIzq>>masDer){
    double resultadoI;
    double resultadoD;

    bitset<16> B(C);
    bitset<16> mask(65280);
    bitset<16> mask2(255);
    bitset<16> segundo(B&mask2);
    B=B>>8;
    int primeroS;
    primeroS=(B.to_ullong());
    int segundoS;
    (segundoS=segundo.to_ullong());

    double izq2=primeroS;
    double der2=segundoS;
    resultadoI=(izq2+((masIzq*izq2)/100));
    primeroS=resultadoI;
    resultadoD=(der2+((masDer*der2)/100));
    segundoS=resultadoD;
    
    if (primeroS>255){
        primeroS=255;
    }if (segundoS>255){
        segundoS=255;
    }
    bitset<16> izq(primeroS);
    bitset<16> der(segundoS);
    izq=izq<<8;
    cout<<(izq|der).to_ullong()<<endl;
    
    }
    
    return 0;
}