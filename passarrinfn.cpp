#include <iostream>
int sum(const int *begin, const int *end);

using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int total_range=sum(arr,arr+3);
    cout<<total_range;
    return 0;
}

int sum(const int *begin, const int *end){
    const int *pointer;
    int total=0;
    for(pointer=begin;pointer!=end;pointer++){
        total+=*pointer;
    }
    return total;
}