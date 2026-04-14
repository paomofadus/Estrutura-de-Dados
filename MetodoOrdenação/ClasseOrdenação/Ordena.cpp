#include "Ordena.h"

void Ordena::geraVetor(int v[], int t){
    for(int i = 0; i < t; i++)
        v[i] = rand() % 100 + 1;
};

void Ordena::copiaVetor(int v1[], int v2[], int t){
    for(int i = 0; i < t; i++)
        v2[i] = v1[i];
};

void Ordena::exibeVetor(int v[], int t){
    for(int i = 0; i < t; i++)
        std::cout << v[i] << " ";
};

void Ordena::Bolha(int v[], int t, int *comp, int *trocas){
    int aux, i, j;
    for(i = 0; i < t; i++){
        for(j = 0; j < t - 1; j++){
            (*comp)++;
            if(v[j] > v[j + 1]){
                (*trocas)++;
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
};

void Ordena::BolhaMelhorado(int v[], int t, int *comp, int *trocas){
    int aux, i = 0, j;
    bool trocou = true;
    while((i <= t) && trocou){
        trocou = false;
        for(j = 0; j < t - 1; j++){
            (*comp)++;
            if(v[j] > v[j + 1]){
                (*trocas)++;
                trocou = true;
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
        i++;
    }
};

void Ordena::Insercao(int v[], int t, int *comp, int *trocas){
    int i, j, eleito;
    for(i = 1; i < t; i++){
        eleito = v[i];
        j = i - 1;
        while((j >= 0) && (v[j] > eleito)){
            (*comp)++;
            (*trocas)++;
            v[j + 1] = v[j];
            j--;
        }
        (*trocas)++;
        v[j + 1] = eleito;
    }
};

void Ordena::Selecao(int v[], int t, int *comp, int *trocas){
    int i, j, eleito, menor, pos;
    for(i = 0; i < t-1; i++){
        eleito = v[i];
        menor = v[i + 1];
        pos = i + 1;
        for(j = i+2; j < t; j++){
            (*comp)++;
            if(v[j] < menor){
                menor = v[j];
                pos = j;
            }
        }
        (*comp)++;
        if(menor < eleito){
            (*trocas)++;
            v[i] = v[pos];
        }
    }
};
