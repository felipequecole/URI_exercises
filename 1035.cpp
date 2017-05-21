#include <iostream>
using namespace std;

int main ()  {
    int numeros[4];
    for (int i=0; i < 4; i++) {
        cin >> numeros[i]; /*se B for maior do que C e se D for maior do que A, e a soma de C com D for maior
        e a soma de A e B e se C e D, ambos, forem positivos e se a variável A for par*/
    }
    if ((numeros[1]>numeros[2])&&(numeros[3]>numeros[0])&&((numeros[2]+numeros[3])>(numeros[0]+numeros[1]))&&(numeros[2]>0)&&(numeros[3]>0)&& (numeros[0]%2==0))
        cout << "Valores aceitos" <<endl;
    else
        cout << "Valores nao aceitos"<<endl;





    return 0;
}
