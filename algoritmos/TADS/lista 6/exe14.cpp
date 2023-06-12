/*
    Elabore um algoritmo que realize o controle dos veículos em um estacionamento a partir de 
    um vetor de tVeículos (placa, modelo, data, hora de entrada, hora de saída e valor) 
    
    e de um
    menu contendo as opções “Registrar entrada de veículo”, 
    “Registrar saída de veículo”, “Listar 
    veículos ativos no estacionamento”, “Informar quantidade de veículos por data”, “Informar 
    total geral arrecadado” e “sair do sistema”. 
    
    Considere que os campos “hora de entrada” e 
    “hora de saída” armazenam somente a hora (sem minutos ou segundos). 
    
    Considere que 
    quando um veículo entra no estacionamento, a hora de saída é, obrigatoriamente, zerada.
    Considere ainda que o valor da hora no estacionamento custa 5 reais e que se o veículo entrar 
    e sair na mesma hora não deverá efetuar pagamento. 
    
    Finalmente, considere que o valor a 
    ser pago deverá ser calculado pelo sistema a partir da hora de entrada e hora de saída
*/
#include <iostream>

using namespace std;

struct tVeiculos
{
    string placa, modelo, data;
    int horaEntrada, horaSaida, valor;
};

int main(){
    bool flag;
    int const n = 3;
    tVeiculos veiculos[n];
    string placa;
    int aux, i, cont = 0;
    do{
        cout << "\n\t\tCONTROLE DE ESTACIONAMENTO\tCarros ativos: " << cont << "\tVagas: " << n-cont;
        cout << "\n\n\t1-Registrar entrada\n\n\t2-Registrar saida\n\n\t3-Listar Veiculos ativos\n\n\t4-Informar quantidade de veiculos por data\n\n\t5-Informar saldo\n\n\t6-Sair do sistema: ";
        cin >> aux;
        getchar();
        switch (aux)
        {
        case 1:
            if((n - cont) != 0){
                do{
                flag = false;
                cout << "\n\tDigite a placa do novo veiculo: ";
                getline(cin, placa);
                for(i = 0; i < cont; i++){
                    if(placa == veiculos[i].placa){
                        flag = true;
                        cout << "\n\tA placa informada ja existe no sistema, por favor digite outra!\n";
                    }
                }
                }while(flag);
                veiculos[cont].placa = placa;
                cout << "\n\tDigite o modelo: ";
                getline(cin, veiculos[cont].modelo);
                cout << "\n\tDigite a data da entrada: ";
                getline(cin, veiculos[cont].data);
                cout << "\n\tDigite a hora da entrada: ";
                cin >> veiculos[cont].horaEntrada;
                veiculos[cont].horaSaida = 0;
                veiculos[cont].valor = 0;
                cont++;
            }else{
                cout << "\n\tNao tem vagas suficientes no estacionamento!";
            }
            break;
        case 2:
            if(cont != 0){
                do{
                flag = false;
                cout << "\n\tDigite a placa do novo veiculo: ";
                getline(cin, placa);
                for(i = 0; i < cont; i++){
                    if(placa == veiculos[i].placa){
                        flag = true;
                        aux = i;
                    }
                }
                if(!flag){
                    cout << "\n\tPor favor digite uma placa valida";
                }
                }while(!flag);
                cout << "\n\tDigite a hora da saida: ";
                cin >> veiculos[aux].horaSaida;
                if((veiculos[aux].horaSaida - veiculos[aux].horaEntrada) != 0){
                    veiculos[aux].valor = (veiculos[aux].horaSaida - veiculos[aux].horaEntrada) * 5;               
                }
                for(i = aux; i < cont; i++){
                    veiculos[i].data = veiculos[i+1].data;
                    veiculos[i].horaEntrada = veiculos[i+1].horaEntrada;
                    veiculos[i].horaSaida = veiculos[i+1].horaSaida;
                    veiculos[i].modelo = veiculos[i+1].modelo;
                    veiculos[i].placa = veiculos[i+1].placa;
                    veiculos[i].valor = veiculos[i+1].valor; 
                }
                cont--;
            }else{
                cout << "\n\tNao tem nenhum carro ativo no momento!";
            }
            break;
        case 3:
            if(cont != 0){
                for(i = 0; i < cont; i++){
                    cout << "\n\tData de entrada do veiculo: " << veiculos[i].data;
                    cout << "\n\n\tHora de entrada do veiculo: " <<veiculos[i].horaEntrada;
                    cout << "\n\n\tHora de saida do veiculo: " <<veiculos[i].horaSaida;
                    cout << "\n\n\tModelo do veiculo: " <<veiculos[i].modelo;
                    cout << "\n\n\tPlaca do veiculo: " <<veiculos[i].placa;
                    cout << "\n\n\tValor a pagar no estacionamento: " <<veiculos[i].valor;
                    cout << "\n\t---------------------------------------------------"<< endl << endl;
                }
            }else{
                cout << "\n\tNao tem nenhum carro ativo no momento!";
            }
            break;
        case 6:
            cout << "\n\tFim do programa!";
            break;
        default:
            cout << "\n\tOpcao invalida!";
            break;
        }
        cout << "\n\t";
        system("pause");
        system("cls");
    }while(aux != 6);
    return 0;
}