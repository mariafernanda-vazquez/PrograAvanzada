#include <iostream>
#include <string>

using namespace std;

int main()
{
    int C[27],n;
    for(int i=0;i<26;i++)
        C[i]=0;
    cin>>n;
    string s;
    getline(cin,s);
    for(int i=0;i<n;i++)
    {
        getline(cin,s);
        for(int j=0;j<s.size();j++)
            if(isalpha(s[j]))
                C[toupper(s[j])-'A']++;
    }
   
   int mayor,pos;
   do
   {
      mayor=0,pos=-1;
      for(int i=0;i<26;i++)
      {
         if(C[i]>mayor){
            mayor=C[i];
            pos=i;
         }
      }
      C[pos]=0;
      if(mayor>0)
         cout<<(char)('A'+pos)<<" "<<mayor<<endl;
   }while(mayor!=0);
    return 0;
}