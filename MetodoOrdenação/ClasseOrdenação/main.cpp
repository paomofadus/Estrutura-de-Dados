#include "Ordena.h"
#define TAM 20

using namespace std;

int main()
{
    Ordena O;
    int vetOriginal[TAM], vetCopia[TAM], comp, trocas;
    srand(time(NULL));

    // criar vetor original
    O.geraVetor(vetOriginal, TAM);
    cout << "\n\nVETOR ORIGINAL \n\n";
    O.exibeVetor(vetOriginal, TAM);

    // ordenando pelo bolha
    O.copiaVetor(vetOriginal, vetCopia, TAM);
    comp = trocas = 0;
    O.Bolha(vetCopia, TAM, &comp, &trocas);
    cout << "\nOrdenado pelo bolha: \n";
    O.exibeVetor(vetCopia, TAM);
    cout << "\n" << comp << " comparações e " << trocas << " trocas\n";

    // ordenando pelo bolha melhorado
    O.copiaVetor(vetOriginal, vetCopia, TAM);
    comp = trocas = 0;
    O.BolhaMelhorado(vetCopia, TAM, &comp, &trocas);
    cout << "\nOrdenado pelo bolha melhorado\n";
    O.exibeVetor(vetCopia, TAM);
    cout << "\n" << comp << " comparações e " << trocas << " trocas\n";

    // ordenado pelo inserção
    O.copiaVetor(vetOriginal, vetCopia, TAM);
    comp = trocas = 0;
    O.Insercao(vetCopia, TAM, &comp, &trocas);
    cout << "\nOrdenado pelo inserção\n";
    O.exibeVetor(vetCopia, TAM);
    cout << "\n" << comp << " comparações e " << trocas << " trocas\n";

    // ordenado pela seleção
    O.copiaVetor(vetOriginal, vetCopia, TAM);
    comp = trocas = 0;
    O.Selecao(vetCopia, TAM, &comp, &trocas);
    cout << "\nOrdenado pela seleção\n";
    O.exibeVetor(vetCopia, TAM);
    cout << "\n" << comp << " comparações e " << trocas << " trocas\n";

    return 0;
}
