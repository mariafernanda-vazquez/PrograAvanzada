#include <iostream>
#include <vector>
#include <sstream>
#include <bitset>

using namespace std;
int main(int argc, char const *argv[])
{
    string C="8CA176";
    int i;
    //cout<<hex<<i;
    stringstream(C)>>hex>>i;
    cout<<i<<endl;
    bitset<24> B(i);
    bitset<24> mask(255);
    cout<<(B&mask).to_ulong()<<endl;
    B=B>>8;
    cout<<(B&mask).to_ulong()<<endl;
    B=B>>8;
    cout<<(B&mask).to_ulong()<<endl;
    return 0;
}
