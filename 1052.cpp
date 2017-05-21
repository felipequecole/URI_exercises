#include <iostream>
using namespace std;

int main () {
    string mes[12];
    mes[0]= "January";
    mes[1]= "February";
    mes[2]= "March";
    mes[3]= "April";
    mes[4]= "May";
    mes[5]= "June";
    mes[6]= "July";
    mes[7]= "August";
    mes[8]= "September";
    mes[9]= "October";
    mes[10]= "November";
    mes[11]= "December";
    int month;
    cin >> month;
    if (month <= 12) {
        cout << mes[month-1]<<endl;
    }




    return 0;
}
