#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


void miprint(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        
    }
    cout<<endl;
}
int main(int argc, char const *argv[])
{
    vector <int> V;
    V.push_back(1);
    V.push_back(2);
    V.push_back(2);
    do{
       miprint(V); 
    }
    while (next_permutation(V.begin(), V.end()));
    return 0;
}
