#include <iostream>

using namespace std;

int main() {

   int opcao=0;
   int alcool = 0;
   int gasolina = 0;
   int diesel = 0;
   while (opcao != 4) {
    if (opcao == 1)
        alcool++;
    else if (opcao == 2)
        gasolina++;
    else if (opcao == 3)
        diesel++;

        cin >> opcao;
    }


    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcool << endl;
    cout << "Gasolina: " << gasolina << endl;
    cout << "Diesel: " << diesel << endl;




    return 0;
}
