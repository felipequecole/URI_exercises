#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    int op, quantidade;
    float total;
    float preco[5] = { (4.0), (4.5), (5.0), (2.0), (1.5)};
    cin >> op >> quantidade;

    total = float(quantidade * preco[op-1]);
    cout << "Total: R$ " << fixed << setprecision(2) << total;




    return 0;
}
