#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;


void coordenadas (int der, int izq){
        float segundos=0;
    if((der%2)==0 && izq<=der){
        segundos=pow(der-1,2) + izq;
    }
    else if ((der%2)==1 && izq<=der){
        segundos=pow(der,2)-(izq-1);
    }
    else if ((izq%2)==1 && izq>=der){
        segundos=pow(izq-1,2)+der;
    }
    else if ((izq%2)==0 && izq>=der){
        segundos=pow(izq,2) -(der-1);
    }
    cout<<segundos<<endl;
}

void segundosR(int segundos){
    float izq;
    float der;
    float raiz;
    raiz=sqrt(segundos);
    int intRaiz=ceil(raiz);
    float residuo;
    residuo=raiz-floor(raiz);

    if (intRaiz%2==0 && residuo==0){
        izq=intRaiz;
        der=1;
    }
    else if (intRaiz%2==1 && residuo==0){
        der=intRaiz;
        izq=1;
    }
    else if(residuo>.50 && intRaiz%2==1){
        der=ceil(raiz);
        izq=pow(ceil(raiz),2)-(segundos-1);
    }

    else if(residuo<.50 && intRaiz%2==1){
        izq=ceil(raiz);
        der=abs(pow(floor(raiz),2)-(segundos));
    }

    else if(residuo>.50 && intRaiz%2==0){
        izq=ceil(raiz);
        der=pow(ceil(raiz),2)-(segundos-1);
    }
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
        if(find(s.begin(), s.end(),' ') != s.end()){
            const char espacio = ' ';
            vector<string> out;
            tokenize(s, espacio, out);
            for (auto &s: out) {
                coordenada.push_back(stoi(s));
            }
            coordenadas(coordenada[1], coordenada[0]);
        }
        else {
            int segundos=stoi(s);
            segundosR(segundos);
        }
    }

    return 0;
}