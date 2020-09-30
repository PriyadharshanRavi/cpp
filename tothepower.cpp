//power

#include <iostream>
int tothepow(int num, int pow);
using namespace std;

int main(){
    cout << "the ans is: " << tothepow(3,27);
    return 0;
}

int tothepow(int num, int pow){
    int res = 1;
    for (int i = 0; i < pow; i++)
    {
        res = res*num;
    }
    return res;
}