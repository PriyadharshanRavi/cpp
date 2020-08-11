// Do while serves the same purpose like the other loops but it allows us to perform a single loop before testing the condition

#include <iostream>

using namespace std;

int main(){
    int x = 1; // initialize the value of x
    do // doing the loop once 
    {
        cout << "here we go again" << endl;
        x++;
    } while (x<=50); //(condition) i did that once and how many times do i have to do it again??
    return 0;
}