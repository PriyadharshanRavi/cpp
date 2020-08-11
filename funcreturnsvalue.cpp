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
    return 7*a;
}
