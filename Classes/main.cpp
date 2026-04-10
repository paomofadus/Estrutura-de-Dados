#include "pessoas.cpp"

void menu() {
    system("cls");
    cout << "1 - Cadastrar" << endl;
    cout << "2 - Listar" << endl;
    cout << "3 - Encerrar" << endl;
    cout << "Insira o comando: ";
}

int main() {
    Pessoa vetPessoas[50];
    int op, pos = 0;
    do {
        menu();
        cin >> op;
        switch(op){
            if(pos < 50){
            case 1:
            cout << "Digite o nome: ";
            cin.ignore();
            getline(cin, vetPessoas[pos].nome);
            cout << "Dia do aniversário: ";
            cin >> vetPessoas[pos].diaAniv;
            cout << "Mês do aniversário: ";
            cin >> vetPessoas[pos].mesAniv;
            cout << "Ano do aniversário: ";
            cin >> vetPessoas[pos].anoAniv;
            pos++;
            } else {
                cout << "Não cabe mais!";
            }
            break;
            case 2:
            for(int i = 0; i < pos; i++){
                cout << "Nome: " << vetPessoas[pos].nome << " Idade: " << vetPessoas[pos].calcIdade() << endl;
            }
            break;
            case 3:
            cout << "Encerrando... " << endl;
            break;
            default:
            cout << "Opção inválida!";
        }
        cout << "Pressione ENTER para continuar...";
        cin.ignore().get();
    } while (op != 3);

    return 0;
}
