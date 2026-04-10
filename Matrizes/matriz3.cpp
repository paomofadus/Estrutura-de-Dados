#include <iostream>
#define LINHAS 10
#define COLUNAS 15
using namespace std;

int main() {
    srand(time(NULL));
    int mat[LINHAS][COLUNAS];
    int soma[LINHAS][COLUNAS];
    int menor;

    // faz a matriz principal
    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            mat[i][j] = rand() % 10 + 1;
        }
    }
    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    } // exibe ela
    cout << endl;
    // acha o menor número de cada linha
    menor = mat[0][0];
    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            if(mat[i][j] < menor){
                menor = mat[i][j];
            }
        } // repassa pela linha multiplicando e guarda na matriz soma
        for(int j = 0; j < COLUNAS; j++){
            soma[i][j] = mat[i][j] * menor;
        }
    }

    // exibe a matriz soma
    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            cout << soma[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}