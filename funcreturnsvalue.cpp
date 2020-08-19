#include <iostream>
int dogage(int);

using namespace std;

int main(){
    int years;
    cout << "enter the age of my dog is " << endl;
    cin >> years;
    int personage = dogage(years);
    cout << "if the dog's age is " << years << "then my age is " << personage << endl;
    return 0;
}

int dogage(int a){
    return 7*a; // when we type return the c++ jumps out of the program and wont execute lines after return in a particular fucntion
}
