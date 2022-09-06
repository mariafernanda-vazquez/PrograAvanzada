#include <iostream>
#include <time.h>
#include <cmath>
#include <string>
#include <vector>
#include <stdio.h>
#include <algorithm>
#define MAX 1000000 // 10^6 primos del 1 al 1000000

using namespace std;

// Funcion booleana que retorna si es prime
bool esPrime(int n) 
{
    int square = sqrt(n); 
    for(int i = 3; i <= square; i+=2) 
    {
        if(n % i == 0) 
            return false;
    }
    return true;
}

// Funcion para imprimir FriendsPrimes
void friendsPrimes(vector<int> v)
{
    for (int i = 0; i < v.size(); i++) 
    {
        if (i > 0) 
            cout << " ";
        cout << v[i];
    }
    cout << endl;
}

// Funcion para sacar los prime numbers respetando su distancia e intervalo
vector<int> primesNumbers(vector<int> &P, int n) 
{
    int tam;
    vector<int> resultado;
    int diferencia = -1;
    for(int i = n+1; i < tam; i++) 
    {
        if (diferencia == -1) 
        {
            resultado.push_back(P[i-1]);
            resultado.push_back(P[i]);
            diferencia = P[i] - P[i-1];
        } else if (diferencia == P[i] - P[i-1])
            resultado.push_back(P[i]);
        else 
            break;
    }
    return resultado;
}

int main()
{     
   // Todo los numeros primos
   vector<int> P;
   // Los friends primes
   vector<vector<int>> P2;
   int tam;

   // Todos los numeros primos
   P.push_back(2);
   for (int i = 3; i < 1000000; i+=2)
   {
      if (esPrime(i)) 
         P.push_back(i);
   }

   tam = P.size();

   // Sacar los Friends Primes, tomando en cuenta sus distancias
   for(int i = 0; i < tam; i++) 
   {
      vector<int> temporal = primesNumbers(P, i);
      if(temporal.size() > 2) 
      {
         P2.push_back(temporal);
         i += temporal.size() - 2;
      }
   }

   int a, b;
   tam = P2.size();

   // Lectura de datos
   while(cin >> a >> b)
   {
      if(a == 0 && b == 0)
         break;
         
      // Imprimir los prime numbers tomando en cuenta el nuevo  Vector P2
      for(int i = 0; i < tam; i++)
      {
         // i es igual al numero en donde se encuentra los numeros primos dentro del intervalo
         if(P2[i][0] >= a && P2[i][P2[i].size()-1] <= b)
            friendsPrimes(P2[i]);
      }
   }
   return 0;
}