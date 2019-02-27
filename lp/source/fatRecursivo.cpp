#include <iostream>
#include <cstdlib>

int fat(int n){
    if(n==0){
        return 1;
    } else {
        return n*fat(n-1);
    }
}
using namespace std;
int main(){
    int fat(int n);
    int num;
    cout << "Digite um número: " << endl;
    cin >> num;
    cout << "Fatorial de " << num << " = " << fat(num) << endl;
    return 0;
}