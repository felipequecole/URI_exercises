#include <iostream>

using namespace std;

int main() {

    int numero;
    int soma=0;
    int aux;
    cin >> numero;
while (numero!=0){
    if (numero%2==0) {
        for (int i = 0; i < 5; i++) {
            soma+=numero;
            numero+=2;
        }
        cout << soma << endl;
        soma = 0;
        cin >> numero;
    }
    else {
        numero+=1;
    for (int i = 0; i < 5; i++) {
            soma+=numero;
            numero+=2;
        }
        cout << soma << endl;
        soma = 0;
        cin >> numero;
    }
}
    return 0;
}
