#include <iostream>
#include <bitset>
#include <math.h>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int primer=10, segundo=5, tercer=1, cuarto=3, quinto=5, sexto=6, septimo=1024;
    int total=pow(2,primer);
    bitset<1040>B;
    B.set();
    int count=0;
    for (int i = 0; i < total; i++)
    {
        B[total-tercer]=false;
        B[total-cuarto]=false;
        B[total-quinto]=false;
        B[total-sexto]=false;
        B[total-septimo]=false;
    }
    cout<<B;
    int indice;
    total=total+2;
    while(primer--){
        total=total-2;
        indice=0;
        cout<<"total"<<total<<endl;
        for (int i = 0; i < total; i+=2)
        {
        cout<<B[i]<<B[i+1]<<endl;
        if(B[i] ^ B[i+1]){
            count++;
            B[indice++]=true;
        }
        else if(B[i] | B[i+1]){
            B[indice++]=true;
        }
        else{
            B[indice++]=false;
        }
        cout<<"contador"<<count<<endl;
        cout<<B[0];
        cout<<B[1];
        cout<<B[2];
        cout<<B[3];
     }
    }

     cout<<count<<endl;
     cout<<indice<<endl;
     cout<<B<<endl;
    return 0;
}
