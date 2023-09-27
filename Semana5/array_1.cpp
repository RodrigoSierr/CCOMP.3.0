#include <iostream>

using namespace std;

int suma(int arr[], int tam){
    int suma = 0;
    for(int i = 0; i < tam; suma += arr[i++]);
    return suma;
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    cout << "La suma es: " << suma(arr,8) << endl;
    return 0;
}