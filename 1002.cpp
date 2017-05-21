#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;

int main () {

    double pi = 3.14159;
    double raio;
    double area;

    cin >> raio;
    area = raio * raio * pi;
    printf ("A=%.4lf", area);
    cout << endl;


    return 0;
}
