#include <iostream>
#include <cmath>
void power(int, int);

using namespace std;

int main(){
    power(2,5);
    return 0;
}

void power(int x, int y){
    x = x*500;
    y = y*100;
    cout << x << " " << y <<  endl; //since it is void function I'm not retunring anything here
}