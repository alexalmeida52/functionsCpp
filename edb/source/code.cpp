#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    float fat(int n);
    int num;
    cout << "Digite um número: " << endl;
    cin >> num;
    cout << "Fatorial de " << num << " = " << fat(num) << endl;
    return 0;
}

float fat(int n)
{   
    int base = 1;
    for (int i = 1; i <= n; i++)
    {
        base *= i;
    }
    return base;
}