#include <iostream>
int total(int arr[], int count);
using namespace std;

int main(){
    int myarr[]={5,10,15,20,25};
    int added=total(myarr,5);
    cout <<"the sum of elements "<< added;
    return 0;
}

int total(int arr[], int count){
    int sum = 0; // initialy the sum of al the elements is 0
    for (int i = 0; i < count; i++)
    {
        sum+=arr[i]; //saving the total one by one in sum and parsing through arr using i
    }
    return sum;
    
}