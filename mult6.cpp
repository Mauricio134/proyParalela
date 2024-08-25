#include <iostream>

using namespace std;

#define tam 1000
#define size 4

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
                          
    for (int i = 0; i < tam; i += size) {
        for (int j = 0; j < tam; j += size) {
            for (int k = 0; k < tam; k += size) {
                for (int l = 0; l < size; ++l) {
                    for (int m = 0; m < size; ++m) {
                        for (int n = 0; n < size; ++n) {
                            c[i + l][j + m] += a[i + l][k + n] * b[k + n][j + m];
                        }
                    }
                }
            }
        }
    }

    cout << "Multiplicación de matrices bucle for x6" << endl;
    return 0;
}