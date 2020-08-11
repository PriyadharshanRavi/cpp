//while loop serves the same purpose as for loop. it is pretty much like a naked for loop without all the begining variables in it 
//it just have test condition in the body unlike for loop
#include <iostream>

using namespace std;

int main(){
    int x = 1; // initializing the variable and adding the starting point here
    while (x<=10){ // adding the range of the loop here. if the test condition inside the body is false the whole while loop isnt gonna run
        cout << x << endl;
        x++; // adding the increament here 
    }
    return 0;
}