//sum of digits
#include <iostream>
using namespace std;
int main(){
    int a, result=0;
    cout << "enter the number" << endl;
    cin>> a;
    for (int i = 0; i < 9; i++)
    {
        result = result + (a%10);
        a=a/10;
    }

    cout << result;
    
}
