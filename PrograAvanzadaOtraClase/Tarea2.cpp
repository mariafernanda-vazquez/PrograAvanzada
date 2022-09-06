#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;
void minusculas(string &s){
    for(int i=0; i<s.size();i++){
        s[i]=tolower(s[i]);
    }
} 
int main()
{
    int N;
    int min, sec, ms;
    string nombre;
    
    while(cin>>N)
    {
        vector <string> nombres, nombres2;
        vector <int> tiempos;
        for(int i = 0; i < N; i++)
        {        
            cin >> nombre;
            
            nombres.push_back(nombre);
            minusculas(nombre);
            nombres2.push_back(nombre);
            
            string l;
            
            cin >> l >> min >> l >> sec >> l >> ms >> l;

            tiempos.push_back((min * 60000) + (sec * 1000) + ms);

        }

        for(int i = 0; i < tiempos.size()-1; i++)
        {
            for(int j = 0; j < tiempos.size()-1-i; j++)
            {
                if(tiempos[j+1] < tiempos[j])
                {
                    int tempTiempo = tiempos[j];
                    string tempNombre = nombres[j];
                    tiempos[j] = tiempos[j+1];
                    nombres[j] = nombres[j+1];
                    tiempos[j+1] = tempTiempo;
                    nombres[j+1] = tempNombre;
                }
                else if(tiempos[j] == tiempos[j+1])
                {
                    if(nombres2[j+1] < nombres2[j])
                    {
                        string tempNombre = nombres[j+1];
                        nombres[j+1] = nombres[j];
                        nombres[j] = tempNombre;
                    }
                }
            }  
        }
        
        int row = 1;
        for(int i = 0; i < tiempos.size(); i+=2)
        {
            cout << "Row " << row++ << endl;
            if(i == tiempos.size()-1)
                cout << nombres[i] << endl;
            else
                cout << nombres[i] << "\n" << nombres[i+1] << endl;
        }
        cout << endl;
    }
    return 0;
}