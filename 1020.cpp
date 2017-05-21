#include <iostream>
using namespace std;

int main (){
    int n;
    cin >> n;
    int anos, meses, dias;
    anos = n / 365;
    n = n % 365;
    meses = n / 30;
    dias = n % 30;
    cout << anos << " ano(s)" << endl << meses << " mes(es)" << endl << dias << " dia(s)" << endl;

    return 0;
}
