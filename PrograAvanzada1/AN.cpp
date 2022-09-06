#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    int cant;
    bool flag;
    string palabra;
    vector<string>palabras;
    cin>>cant;
    while (cin>>palabra)
    {    
        //cout<<palabra<<endl;
        palabras.push_back(palabra);        
    }
    for (int i = 0; i < cant*2; i=i+2)
    {
        cout<<palabras[i].size();
        cout<<palabras[i+1].size()<<endl;
        if(palabras[i].size()!=palabras[i+1].size()){
            flag=false;
        }
        else if (flag) {
            for (int i = 0; i < palabra[i]; i++)
            {
                /* code */
            }
            

        }
    }
    
    
    return 0;
}
