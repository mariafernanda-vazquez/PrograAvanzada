/*  
Se detiene hasta que sean los 7 puntos 
El dash solo va a aparecer al final de la l¡nea, y la palabra va a seguir, no va antes de una l¡nea de 7 puntos 
30 cararcters por l¡nea 
10 l¡neas 
1. en min£sculas 
2. numero de d¡gitos, vocales, y consonantes (tres variables)
3. la palabra menor y la palabra mayor
4. Si CS323 se tiene que imprimir el 1
5. Contar cuantas s, h, 7 en min£scula */

#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    string s, o;
    getline(cin,s);
    while (s!="......."){
        o+=s;
    }
    cout<<o;
    
}
