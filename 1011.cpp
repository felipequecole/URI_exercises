#include <iostream>
#include <stdio.h>
using namespace std;

int main (){
    double pi =  3.14159;
    int raio;
    cin >> raio;
    double volume;
    volume = (4/3.0)*pi*raio*raio*raio;
    cout << "VOLUME = ";
    printf ("%.3lf\n", volume);

    return 0;
}
