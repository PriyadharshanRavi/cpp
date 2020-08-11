// An Array is basically a simple variable which can hold a bunch of differant values in it
// The array hold a bunch of different values and the position goes like 0,1,2,3...

#include <iostream>

using namespace std;

int main(){
    int age[3]; // here I have added 3 coz my array contains 3 numbers in position 0,1,2
    age[0]=24;
    age[1]=18;
    age[2]=25;
    cout << age[0]+age[2];
    return 0;
}