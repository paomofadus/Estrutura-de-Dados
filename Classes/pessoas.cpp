#include "pessoas.h"
using namespace std;

int Pessoa::calcIdade() {
    int idade;
    time_t tempoAtual = time(0);
    tm* tempoLocal = localtime(&tempoAtual);

    int ano = 1900 + tempoLocal->tm_year;
    int mes = tempoLocal->tm_mon + 1;
    int dia = tempoLocal->tm_mday;

    idade = ano - anoAniv;
    if(mes < mesAniv){
        idade--;
    } else if(mes == mesAniv && dia < diaAniv){
        idade--;
    }
    return idade;
}