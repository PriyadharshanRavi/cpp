#include <iostream>

using namespace std;

int main(){
    int x = 10;
    int y = 20;
    cout << x << endl;
    cout << &x << endl; // displaying the address of the variable by adding &
    cout << y << endl;
    cout << &y << endl;
    return 0;
}

/* output: 
10
0x7ffd21f1d870
20
0x7ffd21f1d874

so the value of x  is 10 but what computer sees is 0x7ffd21f1d870
and the 1st value is 4 bits away the 2nd value coz we used int and 
int holds a size of 4 bit  */