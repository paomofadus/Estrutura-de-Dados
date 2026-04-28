#include "Funcoes.h"

using namespace std;

void Menu(){
    system("clear");
    cout << "1 - MDC\n";
    cout << "2 - Soma Digitos\n";
    cout << "3 - Converte Binário\n";
    cout << "4 - Primo\n";
    cout << "5 - Finalizar\n";
    cout << "Escolha: ";
}

int main()
{
    Funcoes F;
    int n1, n2, op;
    unsigned long long int numeroGrande;
    unsigned long long int binario;
    int numPrimo;
    do {
        Menu();
        cin >> op;
        switch(op){
            case 1:
                cout << "Informe o primeiro: ";
                cin >> n1;
                cout << "Informe o segundo: ";
                cin >> n2;
                cout << "O MDC = " << F.MDC(n1, n2) << endl;
                break;
            case 2:
                cout << "Digite o número: ";
                cin >> numeroGrande;
                cout << "Soma: " << F.SomaDigitos(numeroGrande) << endl;
                break;
            case 3:
                cout << "Digite o binário: ";
                cin >> binario;
                cout << "Convertido: " << F.ConverteBinario(binario, 0) << endl;
                break;
            case 4:
                cout << "Digite o número: ";
                cin >> numPrimo;
                if(F.VerificarPrimo(numPrimo, numPrimo-1)){
                   cout << "O número " << numPrimo << " é primo!" << endl;
                }
                else {
                   cout << "O número " << numPrimo << " não é primo!" << endl;
                }
            default:
                cout << "Opção Inválida!\n";
        }
        cout << "Tecle ENTER para continuar ...";
        cin.ignore().get();
    } while(op != 5);
    return 0;
}
