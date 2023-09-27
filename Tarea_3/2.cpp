#include <iostream>
using namespace std;

bool Perfec(int e){
    int t = 0;
    for(int i = 1; i < e; i++){
        if(e % i == 0){
            t += i;
        }
    }
    return t == e;
}

void Perfecs(int n){
    for(int i = 1; i < n; i++){
        if(Perfec(i)){
            cout<<i<<endl;
        }
    }
}

int main() {
    int n;
    cout<<"Ingese numero: ";
    cin>>n;
    Perfecs(n);
}
