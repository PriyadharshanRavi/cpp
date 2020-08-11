#include <iostream>
void populate(int arr[], int count);
void spit(int arr[], int count);
using namespace std;

int main(){
    int myarr[5]={};
    populate(myarr, 5);
    spit(myarr,5);
    return 0;
}

void populate(int arr[], int count){
    int ele;
    for (int i = 0; i < count; i++)
    {
        cout<<"enter the element that is to be added at position " << (i+1) <<" in the array"<<endl;
        cin>>ele;
        arr[i]=ele;
    }
}

void spit(int arr[], int count){
    for (int i = 0; i < count; i++)
    {
        cout<<"the array has " << arr[i] << " at postion " << (i+1) <<endl;
    }
    
}