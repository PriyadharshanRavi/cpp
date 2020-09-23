//check amstrong number

#include <iostream>

using namespace std;

int main(){
    int a, sum=0,temp,r;
    cout << "enter the number: ";
    cin>>a;
    r=a;
    while (a!=0)
    {
        temp = a%10;
        sum = sum + (temp*temp*temp);
        a = a/10;
    }
    if(r == sum){
        cout << "amstrong number"<<endl;
    }else
    {
        cout<<"not an amstrong number"<<endl;
    }
}