#include <iostream>
using namespace std;

int main () {
    int testes;
    int div=0;
    cin >> testes;
    int v[testes];

    for (int i = 0; i < testes; i++) {
        cin >> v[i]; //leitura de dados
    }

    for (int i = 0; i < testes; i++) { //verificando se sao primos
        int aux = v[i];
       for (int j = 1; j <= aux; j++){
            if (aux%j==0){
                div++;
            }
       }
       if (div == 2)
        cout << v[i]<< " eh primo" << endl;
       else
        cout << v[i]<< " nao eh primo"<< endl;
       div = 0;
    }


    return 0;
}
