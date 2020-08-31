//pointers- like int, double, float pointer is also a type of data where it holds the memory addresses 


#include <iostream>

using namespace std;

int main(){
    int age = 20;
    string name = "maxwell";
    int sal = 3.7;
    /*So here we have declared the variable. These variables are stored inside RAM while compiling
    the program. pointer basically tells the memory address of those variables. eg below*/
    cout << "The Memory address of Age: " << &age << endl; 
    cout << "The Memory address of Name: " << &name << endl;
    cout << "The Memory address of Sal: " << &sal << endl;
    //likewise we can also store pointer in a variable
    int *pAge = &age;
    cout << "Printing the saved pointer variable for age: " << pAge << endl;
    cout << "Dereferencing a pointer for age: " << *pAge << endl;
    return 0;
}