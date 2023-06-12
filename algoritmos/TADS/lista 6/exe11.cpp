#include <iostream>

using namespace std;

/*
    Se o usuário escolher a opção 1, pergunte qual a matrícula do aluno que ele deseja 
    consultar. Depois que ele informar, procure a matrícula procurada no vetor Alunos. Se 
    existir, mostre o nome do aluno. Em seguida, procure no vetor Disciplinas pelos dados 
    daquele aluno e mostre os três resultados. 
    - Se o usuário escolher a opção 2, procure no vetor notas qual a matrícula do aluno que possui 
    maior média e escreva A DISCIPLINA E O NOME DO ALUNO. 
    - Se o usuário escolher a opção 3, mostre a média das médias por ALUNO, informando o 
    nome do aluno e a média aritmética de suas médias. 
    - Se o usuário escolher a opção 4, pergunte qual a disciplina que ele deseja consultar. Depois 
    que ele informar, procure e mostre todos os nomes dos alunos daquela disciplina. - Se o 
    usuário escolher 5, finalize o sistema.
*/

struct tAluno{
    string nome;
    int matricula;
};

struct tDisciplina
{
    int matricula;
    string disciplina;
    float nota1, nota2, media = 0;

};
const int n = 3, d = 2;
int main(){
    bool flag;
    string nome;
    tAluno alunos[n];
    tDisciplina disciplinas[n*d];
    double mediaAlunos = 0;
    int aux, posicao;
    for(int i = 0; i < n; i++){
        cout << "\n\tInforme o nome do aluno " << i+1 << ": ";
        getline(cin, alunos[i].nome);
        cout << "\n\tInforme a matricula do aluno " << i+1 << ": ";
        cin >> alunos[i].matricula;
        getchar();
        for(int x = 0; x < d; x++){
            disciplinas[x].matricula = alunos[i].matricula;
            cout << "\n\tInforme o nome da disciplina "<< x+1 << " do aluno " << i+1 << ": ";
            getline(cin, disciplinas[x].disciplina);
            cout << "\n\tInforme as notas n1 e n2 do aluno " << i+1 << " na disciplina de "<<disciplinas[x].disciplina << ": ";
            cin >> disciplinas[x].nota1 >> disciplinas[x].nota2;
            getchar();
            disciplinas[x].media = (disciplinas[x].nota1 + disciplinas[x].nota2)/2; 
        }
    }
    do{
        cout << "\n\tMENU PRINCIPAL\n\n\t1-EXIBIR DADOS DE UM ALUNO\n\t2-EXIBIR MAIOR MEIDA\n\t3-EXIBIR MEDIA DAS MEDIAS POR ALUNO\n\t4-EXIBIR OS ALUNOS DE UMA DISCIPLINA\n\t5-SAIR DO SISTEMA: ";
        cin >> aux;
        switch (aux)
        {
        case 1:
            flag =false;
            cout << "\n\tDigite a matricula que deseja verificar: ";
            cin >> aux;
            for(int i = 0; i < n; i++){
                if(alunos[i].matricula == aux){
                    flag = true;
                    posicao = i;
                }
            }
            if(!flag){
                cout << "\n\tA matricula nao existe no sistema!";
            }else{
                cout << "\n\tO nome do aluno referente a matricula " << aux << " eh: " << alunos[posicao].nome;
            }
            break;
        case 2:
            aux = disciplinas[0].media;
            for(int i = 1; i < (n*d); i++){
                if(aux < disciplinas[i].media){
                    aux = disciplinas[i].media;
                }
            }
            cout << "\n\t A maior media encontrada eh: " << aux;
            break;
        case 3:
            mediaAlunos = 0;
            flag =false;
            cout << "\n\tDigite a matricula que deseja verificar a media: ";
            cin >> aux;
            for(int i = 0; i < n; i++){
                if(alunos[i].matricula == aux){
                    flag = true;
                    posicao = i;
                }
            }
            if(!flag){
                cout << "\n\tA matricula nao existe no sistema!";
            }else{
                for(int i = ((posicao * d)-1);i < (n*d); i++){
                    mediaAlunos += disciplinas[i].media;
                }
                cout << "\n\tA meida do aluno com a matricula " << aux << " eh: " << (mediaAlunos/d);
            }
            break;
        case 4:
            flag = false;
            getchar();
            cout << "\n\tDigite o nome da disciplina: ";
            getline(cin, nome);
            for(int i = 0; i < (n*d); i++){
                if(nome == disciplinas[i].disciplina){
                    flag = true;
                    posicao = i;
                }
            }
            if(!flag){
                cout << "\n\tDisciplina não encontrada!";
            }else{
                int cont = 0;
                for(int i = 0; i < n; i++){
                    flag = false;
                    for(int x = cont; x < (cont + d);x++){
                        cont++;
                        if(disciplinas[x].disciplina == nome){
                            flag = true;
                        }
                    }
                    if(flag){
                        cout << "\n\tO aluno " << i+1 << " esta na disciplina " << nome;
                    }
                }           
            }
            cout << "\n\tExibir alunos de uma disciplina";
            break;
        case 5:
            cout << "\n\tFim do programa!";
            break;
        default:
            cout << "\n\tNumero Invalido!";
            break;
        }
        cout<< "\n\t";
        system("pause");
        system("cls");
    }while(aux != 5);
    return 0;
}