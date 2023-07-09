#include <iostream>

int* uniao(int* x1, int* x2, int n1, int n2, int* qtd) {
    int* x3 = new int[n1 + n2]; // Aloca o vetor x3 dinamicamente

    int i = 0, j = 0, k = 0;

    // Realiza a união de x1 e x2 em x3
    while (i < n1 && j < n2) {
        if (x1[i] < x2[j]) {
            x3[k++] = x1[i++];
        } else if (x2[j] < x1[i]) {
            x3[k++] = x2[j++];
        } else {
            x3[k++] = x1[i++];
            j++;
        }
    }

    // Copia os elementos restantes de x1 (se houver)
    while (i < n1) {
        x3[k++] = x1[i++];
    }

    // Copia os elementos restantes de x2 (se houver)
    while (j < n2) {
        x3[k++] = x2[j++];
    }

    *qtd = k; // Define o tamanho de x3 usando o ponteiro qtd

    return x3; // Retorna o ponteiro para x3
}

int main() {
    int x1[] = {1, 3, 5, 6, 7};
    int x2[] = {1, 3, 4, 6, 8};
    int n1 = sizeof(x1) / sizeof(x1[0]);
    int n2 = sizeof(x2) / sizeof(x2[0]);

    int qtd; // Variável para armazenar o tamanho de x3

    int* x3 = uniao(x1, x2, n1, n2, &qtd);

    std::cout << "x3 = {";
    for (int i = 0; i < qtd; i++) {
        std::cout << x3[i];
        if (i < qtd - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "}" << std::endl;

    delete[] x3; // Libera a memória alocada para x3

    return 0;
}
