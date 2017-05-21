#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;


int main () {

    double a, b, c, delta, r1, r2;
    cin >> a >> b >> c;

    delta = (b*b) - (4*a*c);
    cout << delta << endl;
    if (a==0) {
        cout << "Impossivel calcular" << endl;
        return 0;
    }
    if (delta < 0) {
        cout << "Impossivel calcular" << endl;
        return 0;
    }

    r1 = (sqrt(delta) - b )/(2*a);
    r2 = ( -sqrt(delta) - b)/(2*a);

    cout << "R1 = " << fixed << setprecision(5) << r1 << endl;
    cout << "R2 = " << fixed << setprecision(5) << r2 << endl;

    return 0;
}
