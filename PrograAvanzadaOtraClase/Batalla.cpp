#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int total;
    cin>>total;
    cout<<total;
    int a;
    vector<int>oponente;
    vector<int>equipo;
    for (int i = 0; i < total; i++)
    {
        cin>>a;
        cout<<a<<endl;
        oponente.push_back(a);
    }
    
    
    return 0;
}
