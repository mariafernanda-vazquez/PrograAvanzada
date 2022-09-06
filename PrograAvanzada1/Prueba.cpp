C:\Users\Usuario\Desktop\5to Semestre\PrograAvanzadaOtraClase\prueba.txt#include <stdio.h> //Standard Input output 
#include <iostream>
using namespace std;
int main()
{
    int n,c,j; //n, cuantos casos hay, s, casa l¡nea de coordenada,c, dentro de cada caso cuantas coordenadas hay 
    string s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>c;
        for(int j=0;j<c;j++){
            cin>>s;
            cout<<s<<endl;
        }
    }
}


