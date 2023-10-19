#include <iostream>

int main(){
    int arr[] = {1,2,3,4,5,6};
    int tam = sizeof(arr)/sizeof(arr[0]);

    int *ptr = arr;
    std::cout << ptr << std::endl;
    std::cout << &ptr[0] << std::endl;
    
    for(int i = 0; i < tam; i++){
        std::cout << *(ptr + i)<< " ";
    }
    
    std::cout << std::endl;

    for(int i = 1; i <= tam; i++){
        std::cout << *(ptr + tam - i) << " ";
    }
    std::cout << std::endl << "Renato kbro";
}
