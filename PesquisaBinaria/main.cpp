#include <iostream>
#include "Binaria.h"
#define TAM 100

using namespace std;

int main()
{
    Binaria B;
    int vetor[TAM], i, num, posInicio, posFinal;
    srand(time(NULL));

    do
    cout << "--- VETOR GERADO ---\n";
    for(i = 0; i < TAM; i++){
        vetor[i] = rand() % 10 + 1;
        cout << vetor[i] << " ";
    }
    cout << "\n";

    B.Ordena(vetor, TAM);
    cout << "--- VETOR ORDENADO ---\n";
    for(i = 0; i < TAM; i++){
        cout << vetor[i] << " ";
    }
    cout << "\n";

    cout << "Informe um número: ";
    cin >> num;

    posInicio = B.PBInicio(vetor, num, 0, TAM - 1);
     if(posInicio == -1){
        cout << "Valor não encontrado!\n";
    } else{
        posFinal = B.PBFinal(vetor, num, 0, TAM - 1);
        cout << "Index inicial: " << posInicio << "\n";
        cout << "Index final: " << posFinal << "\n";
        cout << "Total de ocorrências: " << posFinal - posInicio + 1;
    }

    return 0;
}
