#include <iostream>
int cuberoot(int base);

using namespace std;

int main(){
    cuberoot(5);
    return 0;
}

int cuberoot(int base){
    int cuberoot = base * base * base;
    cout << "the cube root of " << base << " is " << cuberoot << endl;
    return cuberoot;
}