#include <iostream>
#include <cstdlib>
using namespace std;
int fibo(int n){
    int cont = 0;
    if(n == 1 || n == 0){
        return 1;
    } else {
        cout << cont << endl;
        cont = fibo(n-1)+fibo(n-2);

        return cont;
    }
}

int main(){
    int fibo(int n);
    int num;
    cout << "Digite um número: " << endl;
    cin >> num;
    fibo(num);
    // cout << "Fibonacci de " << num << " = " << fibo(num) << endl;
    return 0;
}