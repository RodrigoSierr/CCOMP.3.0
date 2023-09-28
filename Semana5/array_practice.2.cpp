#include <iostream>

using namespace std;

void intercambio(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void inver(int arr[], const int tam) {
    for (int i = 0; i < tam / 2; i++) {
        intercambio(arr[i], arr[tam - 1 - i]);
    }
}

void recur(int arr[], const int tam, int i = 0) {
    if (i >= tam) {
        return;
    }

    cout << arr[tam - 1 - i] << " ";

    recur(arr, tam, i + 1);
}


int main() {
    const int tam = 5;
    int arr[tam] = { 1, 2, 3, 4, 5 };

   // inver(arr, tam);

    for (int i = 0; i < tam; i++) {
        cout << arr[i] << " ";
    }
    cout <<"\n" << "-------------" << endl;

    recur(arr, tam);
    return 0;
}