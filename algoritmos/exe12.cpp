#include <iostream>

using namespace std;

void selectionSort(int arr[], int n) {
    int i, j, min_idx;

    // loop através de todos os elementos do array
    for (i = 0; i < n-1; i++) {
        // Encontra o menor elemento no array desordenado
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }

        // Troca o menor elemento com o primeiro elemento do array desordenado
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int arr[] = {10, 8, 2, 5, 3, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr, n);

    cout << "Lista ordenada: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

