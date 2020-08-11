//pointer is a varable that holds the address in your memory
// its pretty much the variable that points to that address in your memory

#include <iostream>

using namespace std;

int main(){
    int x = 10;
    int y = 20;
    int *pointingx;
    pointingx = &x;
    int *pointingy;
    pointingy = &y; // so basically if we want to hold the value of x & since x is  an integer we have to declare pointer of that paricular variable as an integer
    cout << pointingy << endl << pointingx << endl;
    return 0;
}