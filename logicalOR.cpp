#include <iostream>

using namespace std;

int main(){
    cout << "are you feeling lucky today? (y/n)" << endl;
    char ans;
    cin >> ans;
    if(ans=='y' || ans=='Y'){
        cout<<"Hey lucky fellow" <<endl;
    }
    else if(ans=='n'|| ans=='N'){
        cout<<"dont worry! gaurdian angels are around you"<<endl;
    }else{
        cout<<"please enter the correct input"<<endl;
    }
    return 0;
}