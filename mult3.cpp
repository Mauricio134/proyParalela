#include <iostream>

using namespace std;

#define tam 1000

double a[tam][tam], b[tam][tam], c[tam][tam];

int main(){

    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            c[i][j] = 0;
        }
    }
    int numero = 1;
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            a[i][j] = numero++;
        }
    }

    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            b[i][j] = numero++;
        }
    }
                          
    for(int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            for (int k = 0; k < tam; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }   
        }
    }

    cout << "Multiplicación de matrices bucle for x3" << endl;
    return 0;
}