#include <iostream>
#include <vector>
#include <bitset>
using namespace std;
int main(int argc, char const *argv[])
{
    int n=-1;
    while (true)
    {    
        if (n==0)
        {
            return 1;
        }
        cin>>n;
        bitset<32> B(n),a,b;
        bool ta=true;
        for (int i = 0; i <=31; i++)
        if (B[i]){
                ta ? a.set(i, true) : b.set(i,true);
                ta=!ta;
        }

        cout<<a.to_ullong()<<endl;
        cout<<b.to_ullong()<<endl;
    }


    return 0;
}
