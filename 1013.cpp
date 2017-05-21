#include <iostream>
using namespace std;

int main () {
    int a, b, c;
    int maior;
    cin >> a >> b >> c;

    if (a >= b)
        maior = a;
    else
        maior = b;

    if (c > maior)
        maior = c;

    cout << maior << " eh o maior" << endl;


    return 0;
}
