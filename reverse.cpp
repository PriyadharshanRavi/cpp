//reverse a number

#include <iostream>

using namespace std;

int main(){
    int num, reverse = 0;
    cout << "enter the number :" ;
    cin >> num;
    while (num>0)
    {
        reverse = reverse * 10 + (num%10);
        num = num/10;
    }
    cout << "reverse: " << reverse;

}