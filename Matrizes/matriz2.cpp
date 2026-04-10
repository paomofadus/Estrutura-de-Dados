#include <iostream>
#define LINHAS 9
#define COLUNAS 8
using namespace std;

int main() {
    srand(time(NULL));
    int mat[LINHAS][COLUNAS];
    float media = 0.0;
    int pares = 0;

    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            mat[i][j] = rand() % 30 + 1;
        }
    }

    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            if(mat[i][j] % 2 == 0){
                media += mat[i][j];
                pares += 1;
            }
        }
    }
    media /= pares;
    printf("A media dos numeros pares: %.2f", media);

    return 0;
}