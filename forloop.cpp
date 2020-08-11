// for loop is basically helps assigning a program to do a particular task over and over again 


#include <iostream>

using namespace std;

int main(){
    int x;
    for(x=0;x<9;x++) //we dont need to put ; at the end we have to leave it blank.
    // so the syntax basically contains where to start where to stop and how much we wanna increment it by
    {
        cout << "the value of x is now changes to " << x << endl;
    }
    return 0;
}