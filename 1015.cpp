#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main () {
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double distancia;

    distancia = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    cout << fixed;
    cout << setprecision(4) << distancia << endl;

    return 0;
}
