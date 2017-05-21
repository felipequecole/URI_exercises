#include <iostream>
using namespace std;

int fatorial (int n) {
    if (n==0)
        return 1;

    else
        return n*(fatorial(n-1));
}

int main () {
    int numero;
    cin >> numero;
    cout << fatorial(numero) << endl;

    return 0;
}
