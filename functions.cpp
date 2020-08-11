#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double num1;
    cout << "Pick your first number.." << endl;
    cin >> num1;
    
    double num2;
    num2 = cbrt (num1);

    cout << "So, basically the cube root of num1 is num2 which is " << num2 << endl;
    return 0;
}