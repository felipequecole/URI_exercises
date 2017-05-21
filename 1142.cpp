#include <iostream>
using namespace std;

int main (){
    int linhas;
    int n=1;
    cin >> linhas;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < 4; j++ ) {
            if (n%4 != 0) {
                cout << n << " ";
            }
            else
                cout << "PUM" << endl;

            n++;
        }
    }

    return 0;
}
