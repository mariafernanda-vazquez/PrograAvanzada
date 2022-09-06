#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool isVowel (char c){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
       return true;
        }
    else 
        return false;
    }

int main(int argc, char const *argv[])
{
    int totalIrregulaes;
    int totalCambiar;
    string espacio;
    vector <string> irregulares;
    vector <string> correcto;
    string singular, plural;
    cin>>totalIrregulaes;
    cin>>totalCambiar;
    getline(cin,espacio);
    for (int i = 0; i < totalIrregulaes; i++)
    {
        cin>>singular;
        irregulares.push_back(singular);
        cin>>plural;
        irregulares.push_back(plural);
    }
    string siguiente;
    string nueva;
    while (cin>>siguiente){
        int length=siguiente.size();
        char ultima=siguiente[length-1];
        char pUltima=siguiente[length-2];
        if (std::find(irregulares.begin(), irregulares.end(), 
        siguiente) != irregulares.end())
        {
            if (siguiente==irregulares[0])
                correcto.push_back(irregulares[1]);
            else if (siguiente==irregulares[2])
                correcto.push_back(irregulares[3]);
            else if (siguiente==irregulares[4])
                correcto.push_back(irregulares[5]);
        }
            else if (ultima=='o'||ultima=='s'||ultima=='x'){
                correcto.push_back(siguiente+"es");
            } 
            else if ((ultima=='h'&& pUltima=='c') || (ultima=='h'&& pUltima=='s'))
                correcto.push_back(siguiente+"es");
            else if (!isVowel(pUltima)&&(ultima=='y')){
                correcto.push_back(siguiente.substr(0,length-1)+"ies");
            }
                
            else 
                correcto.push_back(siguiente+"s");
    }

   for (int j = 0; j < totalCambiar; j++)
    {
        cout<<correcto[j]<<endl;
    } 
    return 0;
}
