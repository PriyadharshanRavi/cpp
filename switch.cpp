#include <iostream>

using namespace std;

int main(){
    int x;
    cout<<"how many legs do you have?"<< endl;
    cin >> x;
    switch (x)
    {
    case 1:
        cout<<"you are a one legged pirate"<<endl;
        break;
    case 2:
        cout<<"you are a person"<<endl;
        break;
    case 3:
        cout<<"you are a three legged rabit"<<endl;
        break;
    case 4:
        cout<<"you are a dog"<<endl;
        break;
    
    default:
        cout<<"you doent belong to this planet"<<endl;
        break;
    }
    return 0;
}