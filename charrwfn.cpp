#include <iostream>
void populate(int arr[], int count);
void spit(int arr[], int count);
void revalue(int r, int arr[], int count);
using namespace std;

int main(){
    int myarr[6]={};
    populate(myarr,6);
    spit(myarr,6);
    cout<<"enter the value to multiply the array: " ;
    int multi;
    cin>> multi;
    revalue(multi,myarr,6);
    spit(myarr,6);
    return 0;
}

void populate(int arr[], int count){
    int ele;
    for (int i = 0; i < count; i++)
    {
        cout<<"enter the element at position " << (i+1) <<endl;
        cin>>ele;
        arr[i]=ele;
    }
}

void spit(int arr[], int count){
    for (int i = 0; i < count; i++)
    {
        cout<<"the element at position " << (i+1)<< " is " << arr[i] <<endl;
    }    
}

void revalue(int r, int arr[], int count){
    for (int i = 0; i < count; i++)
    {
        arr[i]*=r;
    }
}

