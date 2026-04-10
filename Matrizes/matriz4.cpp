#include <iostream>
#define TAM 10
using namespace std;

int main() {
    int mat[TAM][TAM];
    float soma_coluna, soma_linha;
    int qtd;
    srand(time(NULL));

    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            mat[i][j] = rand() % 50 + 1;
        }
    }

    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    soma_coluna = 0.0;
    qtd = 0;
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            if(j % 2 == 0){
                soma_coluna += mat[i][j];
                qtd++;
            };
        }
    }
    soma_coluna /= qtd;
    printf("Media das colunas pares: %.2f", soma_coluna);
    cout << endl;

    soma_linha = 0.0;
    qtd = 0;
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            if(i % 2 != 0){
                soma_linha += mat[i][j];
                qtd++;
            };
        }
    }
    soma_linha /= qtd;
    printf("Media das linhas impares: %.2f", soma_linha);

    return 0;
}