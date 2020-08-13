#include <iostream>
#include <cmath>

using namespace std;

int main(){
    cout << 3 << endl;
    cout << 3+5 << endl;
    cout << 10-3 << endl;
    cout << 3*3 << endl;
    cout << 3/1 << endl;
    cout << 100%3 << endl; //this basically divides 100 by 3 and gives the reminder
    //also c++ supports BODMAS
    cout << 3 - 5 * 100 << endl;
    int c=cbrt(2);
    int b=pow(5,5);
    int a=fmax(10,20);
    //tells the big number and also theres similar function called fmin
    cout << c<<endl;
    cout << b<<endl;
    cout << a<<endl;
    return 0;
}