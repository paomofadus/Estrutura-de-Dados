#include "Funcoes.h"
#include <math.h>

int Funcoes::MDC(int a, int b){
    if(a % b == 0)
        return b;
    return MDC(b, a%b);
};

int Funcoes::SomaDigitos(unsigned long long int N){
    if(N == 0)
        return N;
    return N%10 + SomaDigitos(N/10);
};

int Funcoes::ConverteBinario(unsigned long long int B, int e){
    if(B == 0)
        return B;
    return (B%10 * pow(2, e)) + ConverteBinario(B/10, ++e);
};

bool Funcoes::VerificarPrimo(int n, int d){
    if(n < 2)
        return false;
    if(d == 1)
        return true;
    if(n % d == 0)
        return false;
    return VerificarPrimo(n, --d);
}
