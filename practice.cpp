#include <iostream>
void getMax(int a,int b);

using namespace std;

int main(){
    getMax(5,2);
    return 0;
}

void getMax(int a,int b){
    if(a < b){
        cout<<"b is greater"<<endl;
    }else{
        cout<<"a is greater"<<endl;
    }
}