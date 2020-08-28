//exponential function

#include <iostream>
int expo(int base, int power);

using namespace std;

int main(){
    expo(5,5);
    return 0;
}

int expo(int base, int power){
    cout << "enter the base number: ";
    cin >> base;
    cout << "enter the power number: ";
    cin >> power;
    int result = 1;
    for (int i=0; i < power; i++)
    {
        result = result * base;
    }
    cout << "The answer is: " << result<<endl;
    return result;
    
}