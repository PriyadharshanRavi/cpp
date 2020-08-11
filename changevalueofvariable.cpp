#include <iostream>

using namespace std;

int main(){
    int a;
    a=100;
    cout << "the value of A is " << a << endl;
    a=200;
    cout << "the value of A is changed to " << a << endl;
    a=100+200;
    cout << "the value of A is now " << a << endl;
    a=a+42;
    cout << "the value of A is now " << a << endl;
    return 0;
}

// basically this shows that c++ reads the code from top to bottom 
