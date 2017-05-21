#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    int dist;
    double comb;
    double consumo;

    cin >> dist >> comb;

    consumo =  double(dist/comb);

    cout << fixed;
    cout << setprecision(3) << consumo << " km/l" << endl;
}
