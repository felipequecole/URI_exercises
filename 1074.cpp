#include <iostream>
using namespace std;

int main (){
    int testes;
    cin >> testes;
    int casos[testes];

    for (int i = 0; i < testes ; i++) {
        cin >> casos[i];
    }

    for (int i = 0; i < testes ; i++) {
        if (casos[i] > 0) {
            if (casos[i]%2==0) {
                cout << "EVEN POSITIVE" << endl;
            }
            else {
                cout << "ODD POSITIVE" << endl;
            }
        }
        else if (casos[i] < 0) {
            if (casos[i]%2==0) {
                cout << "EVEN NEGATIVE" << endl;
            }
            else {
                cout << "ODD NEGATIVE" << endl;
            }
        }

        else {
            cout << "NULL" << endl;
        }
    }


    return 0;
}
