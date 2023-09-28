#include <iostream>

using namespace std;


 void imprimir(const int arr[], const int tam, int i = 0) {
        if (i < tam) {
            cout << arr[i] << " ";
            imprimir(arr, tam, i + 1);
        }
    }

int main() {
    const int tam = 4;
    int arr[tam] = { 1,2,3,4 };

    imprimir(arr, tam);


    return 0;
}
