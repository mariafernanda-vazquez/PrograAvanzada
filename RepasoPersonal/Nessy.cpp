#include <iostream>
#include <vector>
#include <string>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int total;
    int n;
    int m;
    int respuesta1=0, respuesta2, respuesta3;
    cin>>total;
    while(cin>>n>>m){
        respuesta1=(m/3)*(n/3);
        cout<<respuesta1<<endl;
    }
    
    return 0;
}
