/*José Manuel Gallegos Zúñiga 610750
    Maria Fernanda Vazquez 616683

    Código de Honor: Damos nuestra palabra de que hemos 
    realizado esta actividad con integridad Académica.*/
    
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    // Simplemente se utiliza los datos, no es necesario crear tabla o usar vectores.
    int A, B, C, D;
    
    while(cin >> A >> B >> C >> D)
    {
        int resultado; // Ultimo caso, termina y no hace nada
        if(A == 0 && B == 0 && C == 0 && D == 0)
            break;
        
        if(A == C && B == D) // Misma posicion, no hace ningun movimiento
            resultado = 0;
        else if(A == C || B == D || abs(A - C) == abs(B - D)) // Si una de esas es igual, solo hace un movimiento
            resultado = 1;
        else
            resultado = 2; // Si no es ninguna de los casos anteriores, tendra que hacer dos movimientos

        cout << resultado << endl;
    }

    return 0;
}