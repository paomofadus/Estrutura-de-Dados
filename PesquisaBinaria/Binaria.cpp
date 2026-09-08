#include "Binaria.h"

int Binaria::PBIterativa(int vet[], int e, int t){
    int inicio = 0, fim = t - 1;
    int meio;
    while(inicio <= fim){
        meio = (inicio + fim) / 2;
        if(vet[meio] == e) return meio;
        if(vet[meio] > e) return fim = meio - 1;
        else inicio = meio + 1;
    }
    return -1;
};

int Binaria::PBRecursiva(int vet[], int i, int f, int e){
    int meio = (i + f) / 2;
    if(vet[meio] == e) return meio;
    if(i >= f) return -1;
    else{
        if(vet[meio] < e) return PBRecursiva(vet, meio + 1, f, e);
        else return PBRecursiva(vet, i, meio - 1, e);
    }
};

int Binaria::PBInicio(int vet[], int n, int inicio, int fim){
    if(inicio > fim)
        return -1;
    int meio = (inicio + fim) / 2;
    if(vet[meio] == n){
        int posicaoAnterior = PBInicio(vet, n, inicio, meio - 1);
        if(posicaoAnterior != -1)
            return posicaoAnterior;
        return meio;
    }
    else if(vet[meio] < n)
        return PBInicio(vet, n, meio + 1, fim);
    else
        return PBInicio(vet, n, inicio, meio - 1);
};

int Binaria::PBFinal(int vet[], int n, int inicio, int fim){
    if(inicio > fim)
        return -1;
    int meio = (inicio + fim) / 2;
    if(vet[meio] == n){
        int posicaoPosterior = PBFinal(vet, n, meio + 1, fim);
        if(posicaoPosterior != -1)
            return posicaoPosterior;
        return meio;
    }
    else if(vet[meio] < n)
        return PBFinal(vet, n, meio + 1, fim);
    else
        return PBFinal(vet, n, inicio, meio - 1);
};

void Binaria::Ordena(int vet[], int t){
    int aux, menor, pos, i, j;
    for(int i = 0; i < t - 1; i++){
        aux = vet[i];
        menor = vet[i + 1];
        pos = i + 1;
        for(int j = i+2; j < t; j++){
            if(vet[j] < menor){
                menor = vet[j];
                pos = j;
            }
        }
        if(menor < aux){
            vet[i] = vet[pos];
            vet[pos] = aux;
        }
    }
};
