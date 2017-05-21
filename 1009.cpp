#include <iostream>
#include <stdio.h>
using namespace std;

int main (){
    string nome;
    double salario;
    double vendas;
    double total;

    cin >> nome;
    cin >> salario;
    cin >> vendas;

    total = salario + (0.15*vendas);

    cout << "TOTAL = R$ ";
    printf ("%.2lf\n", total);




    return 0;
}
