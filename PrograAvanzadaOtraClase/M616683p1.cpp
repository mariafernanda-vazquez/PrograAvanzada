#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;

//Funcion cuando el input tiene dos números (coordenadas), despliega segundos 
void coordenadas (int der, int izq){
        float segundos=0;
    //Si el segundo número es par y el primer número es menor o igual al segundo, 
    //A segundo se resta 1, se eleva al cuadrado y al final se suma el primer número.
    if((der%2)==0 && izq<=der){
        segundos=pow(der-1,2) + izq;
    }
    //Si el segundo número es impar y el primer número es menor o igual al segundo, 
    //segundo se eleva al cuadrado y al final se resta el primer numero disminuido en 1
    else if ((der%2)==1 && izq<=der){
        segundos=pow(der,2)-(izq-1);
    }
    //Si el primer número es impar y el primer número es mayor o igual al segundo, 
    //A primero se resta 1, se eleva al cuadrado y al final se suma el segundo número.
    else if ((izq%2)==1 && izq>=der){
        segundos=pow(izq-1,2)+der;
    }
    //Si el primer número es par y el primer número es mayor o igual al segundo, 
    //el primero se eleva al cuadrado y al final se resta el segundo numero disminuido en 1
    else if ((izq%2)==0 && izq>=der){
        segundos=pow(izq,2) -(der-1);
    }
    cout<<segundos<<endl;
}

//De input se tienen los segundos, se buscan coordenadas
void segundosR(int segundos){
    float izq;
    float der;
    float raiz;
    //sacamos raíz de los segundos
    raiz=sqrt(segundos);
    //redondeamos hacia el siguiente número
    int intRaiz=ceil(raiz);
    float residuo;
    //se resta la raíz decimal con el numero redondeado al número anterior, para tener el residuo decimal
    residuo=raiz-floor(raiz);

    //si la raiz redondeada a siguiente número es par y exacta, la primera coordenada es la raiz, y la segunda es 1
    if (intRaiz%2==0 && residuo==0){
        izq=intRaiz;
        der=1;
    }
    //si la raiz redondeada a siguiente número es impar y exacta, la primera coordenada es 1, y la segunda es la raiz
    else if (intRaiz%2==1 && residuo==0){
        der=intRaiz;
        izq=1;
    }

    //si la raiz redondeada a siguiente número es impar y el residuo es mayor a .5, la primera coordenada es la raiz de los segundos redondeada al siguiente numero elevada al cuadrado y
    //se resta el total de segundos disminuidos en 1 y la segunda coordenada es la raiz redondeada a siguiente numero.
    else if(residuo>.50 && intRaiz%2==1){
        der=ceil(raiz);
        izq=pow(ceil(raiz),2)-(segundos-1);
    }
    //si la raiz redondeada a siguiente número es impar y el residuo es menor a .5, la segunda coordenada es numero absoluto de: la raiz de los segundos redondeada al numero anterior elevada al cuadrado y
    //se resta el total de segundos. La primera coordenada es la raiz redondeada a siguiente numero.
    else if(residuo<.50 && intRaiz%2==1){
        izq=ceil(raiz);
        der=abs(pow(floor(raiz),2)-(segundos));
    }
    //si la raiz redondeada a siguiente número es par y el residuo es mayor a .5, la segunda coordenada es la raiz de los segundos redondeada al siguiente numero elevada al cuadrado y
    //se resta el total de segundos disminuidos en 1. La primera coordenada es la raiz redondeada a siguiente numero.
    else if(residuo>.50 && intRaiz%2==0){
        izq=ceil(raiz);
        der=pow(ceil(raiz),2)-(segundos-1);
    }
    //si la raiz redondeada a siguiente número es par y el residuo es menor a .5, la primera coordenada es numero absoluto de: la raiz de los segundos redondeada al numero anterior elevada al cuadrado y
    //se resta el total de segundos. La segunda coordenada es la raiz redondeada a siguiente numero.
    else if(residuo<.50 && intRaiz%2==0){
        der=ceil(raiz);
        izq=abs(pow(floor(raiz),2)-(segundos));
    }
    cout<<izq<<" "<<der<<endl;
}

void tokenize(std::string const &str, const char espacio,vector<string> &out)
{
    size_t start;
    size_t end = 0;
    while ((start = str.find_first_not_of(espacio, end)) != std::string::npos)
    {
        end = str.find(espacio, start);
        out.push_back(str.substr(start, end - start));
    }
}

int main(int argc, char const *argv[])
{
    string s;

    while(getline(cin,s) && s != "0"){
        vector<int>coordenada;
        string espacio;
        //si se encuentra un espacio, se sabe que son coordenadas
        if(find(s.begin(), s.end(),' ') != s.end()){
            //delimitador para separar los strings
            const char espacio = ' ';
            //vector donde se almacenan los strings
            vector<string> out;
            tokenize(s, espacio, out);
            //mientras no se llegue al final del vector 
            for (auto &s: out) {
                //almacenan las coordenadas
                coordenada.push_back(stoi(s));
            }

            coordenadas(coordenada[1], coordenada[0]);
        }
        //si no hay espacio son segundos 
        else {
            int segundos=stoi(s);
            segundosR(segundos);
        }
    }

    return 0;
}