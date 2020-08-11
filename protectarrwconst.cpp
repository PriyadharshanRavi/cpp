#include <iostream>
int populate(int arr[], int count);
void spit(const int arr[], int count);
using namespace std;

int main(){
    int myarr[6]={};
    populate(myarr,6);
    spit(myarr,6);
    return 0;
}

int populate(int arr[], int count){
    int ele;
    for (int i = 0; i < count; i++)
    {
        cout<<"enter element at " << (i+1) << endl;
        cin>>ele;
        arr[i]=ele;
    }
    return ele;
}

void spit(const int arr[], int count){
    for (int i = 0; i < count; i++)
    {
        cout<<"the value at position "<<(i+1)<<" is " << arr[i]<<endl;
    }
}