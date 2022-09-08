#include <iostream>
#include <bitset>
#include <math.h>
#include <vector>
using namespace std;


int main(int argc, char const *argv[])
{
    int primer=2, segundo=2, tercer=3, cuarto=4;
    int total=pow(primer,segundo);
    bitset<255>B(pow(2,4)-1);
    cout<<B; 
    int count=0;
    for (int i = 0; i < 4; i+=2)
    {
        B[4-3]=false;
        B[4-4]=false;
    }
    cout<<B<<endl;
     vector <int> vector;
        for (int i = 0; i < 4; i+=2)
        {
        cout<<B[i]<<B[i+1]<<endl;
        if(B[i] ^ B[i+1]){
            count++;
            cout<<"1";
            vector.push_back(true);
        }
        else if(B[i] | B[i+1]){
            cout<<"2";
            vector.push_back(true);
        }
        else{
            cout<<"3";
            vector.push_back(false);
        }
     }
     cout<<B<<endl;

     for (int i = 0; i < vector.size(); i++)
     {
        cout<<vector[i];
     }
    return 0;
}
