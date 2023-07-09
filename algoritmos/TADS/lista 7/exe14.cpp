#include <iostream>
using namespace std;
#include <string>

int* encontrarPosicoes(const std::string& texto, char letra, int& tamanhoVetor) {
    int* posicoes = new int[texto.size()];
    int count = 0;
    for (int i = 0; i < texto.size(); i++) {
        if (texto[i] == letra) {
            posicoes[count] = i;
            count++;
        }
    }
    
    tamanhoVetor = count;
    return posicoes;
}

int main() {
    string texto;
    char letra;
    cout << "\nDigite um texto: ";
    getline(cin, texto);
    cout << "\nDigite uma letra para ver quais posicoes ela ocupa: ";
    cin >> letra;
    int tamanhoVetor = 0;
    int* posicoes = encontrarPosicoes(texto, letra, tamanhoVetor);
    
    std::cout << "Posições onde a letra '" << letra << "' foi encontrada: ";
    for (int i = 0; i < tamanhoVetor; i++) {
        std::cout << posicoes[i] << " ";
    }
    
    std::cout << std::endl;
    std::cout << "Tamanho do vetor: " << tamanhoVetor << std::endl;
    
    delete[] posicoes; // Liberar memória alocada
    
    return 0;
}
