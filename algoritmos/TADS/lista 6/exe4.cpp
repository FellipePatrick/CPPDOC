/*
    Escreva um programa para cadastrar dois clientes de uma loja. As informações necessárias 
    para o cliente são: identidade, nome, endereço e telefone. OBS: Deve ser usada uma 
    estrutura de registro para a construção deste cadastro
*/

#include <iostream>

using namespace std;

struct Endereco{
    string rua, bairro, cidade;
    int numero;
};

struct Cliente{
    string identidade, nome, telefone;
    Endereco endereco;
};

int main(){
    int const qtd = 2;
    Cliente clientes[qtd];
    int i = 0;
    bool flag = true;
    char res =  's';
    do{
        if(res == 'n'){
            flag = false;
        }else{
            cout << "\nDigite o nome do cliente " << i+1 << ": ";
            getline(cin, clientes[i].nome);
            cout << "\nDigite a identidade do cliente " << i+1 << ": ";
            getline(cin, clientes[i].identidade);
            cout << "\nDigite o telefone do cliente " << i+1 << ": ";
            getline(cin, clientes[i].telefone);
            cout << "\nDigite a rua do cliente " << i+1 << ": ";
            getline(cin, clientes[i].endereco.rua);
            cout << "\nDigite o bairro do cliente " << i+1 << ": ";
            getline(cin, clientes[i].endereco.bairro);
            cout << "\nDigite a cidade do cliente " << i+1 << ": ";
            getline(cin, clientes[i].endereco.cidade);
            cout << "\nDigite o numero da casa do cliente " << i+1 << ": ";
            cin >> clientes[i].endereco.numero;    
            cout << "\nDeseja informar outro cliente s-sim ou n-não: ";
            cin >> res;
            i++;  
            getchar();
        }
    }while(flag && i < qtd);
    system("cls");
    cout << "\nRelatorio de Clientes\n";
    cout << "\nN\t\tNome";
    for(int x = 0; x <= i; x++){
        cout << "\n\n" << x+1 << "\t\t" << clientes[x].nome;
    }
    return 0;
}