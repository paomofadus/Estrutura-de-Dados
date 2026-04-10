#include <iostream>
#define LINHA 12
#define COLUNA 7
using namespace std;

int main() {
    srand(time(NULL));
    int mat[12][7];
    int maior;
    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            mat[i][j] = rand() % 15 + 1;
        }
    }

    maior = mat[0][0];
    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            if(mat[i][j] > maior){
                maior = mat[i][j];
            }
        }
    }

    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            if(mat[i][j] == maior){
                cout << "O maior numero da matriz é " << maior << ". Linha: " << i << " Coluna: " << j << endl;
            }
        }
    }

    return 0;
}
