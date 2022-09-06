#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
int main(){
   fstream newfile;
   newfile.open("numeros.txt",ios::out);  // open a file to perform write operation using file object
   if(newfile.is_open()) //checking whether the file is open
   {
      newfile<<"Tutorials point \n";   //inserting text
      newfile.close();    //close the file object
   }
   newfile.open("numeros.txt",ios::in); //open a file to perform read operation using file object
   if (newfile.is_open()){   //checking whether the file is open
      string tp;
      int mayor=0;
      int pos=0;
         vector<int>numeros;
      while(getline(newfile, tp)){ //read data from file object and put it into string.
         numeros.push_back(stoi(tp));
            /*if(numeros[0]<numeros[1]){
               numeros[0]=numeros[1];
               cout <<numeros[0];
            }*/
            
         //cout << tp << "\n"; //print the data of the string
         }
         for(int i=0;i<numeros.size();i++){
            cout<<numeros[i]<<endl;
               if(mayor<numeros[i]){
               mayor=numeros[i];
               pos=i;
         }

      }

      cout<<"el numero mas grande es: "<< mayor;
      cout<<endl<<"El n£mero est  en la posicion: "<<(pos+1);
      newfile.close(); //close the file object.
   }
}
