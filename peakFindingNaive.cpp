//peak finding naive

#include <iostream>

using namespace std;

int main(){
    int a[5]={},peak;
    cout<<"enter the array: ";
    for (int i = 0; i < 5; i++)
    {
        cin>>a[i];
    }
    cout<<"the array you have entered is: ";
    for (int j = 0; j < 5; j++)
    {
        cout<<a[j]<<", ";
    }
    
    //finding peak
    peak = a[0];
    for (int k = 0; k < 5; k++)
    {
        if(peak<a[k]){
            peak = a[k];
        }
    }
    cout << "peak is: " << peak<<endl;

    return 0;
}