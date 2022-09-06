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
    string respuesta;
    cin>>total;
    while(cin>>n>>m){
        if(n<m){
            respuesta="<";
        }
        else if (n>m){
            respuesta=">";
        }
        else{
            respuesta="=";
        }
    cout<<respuesta<<endl;
    }
    return 0;
}
