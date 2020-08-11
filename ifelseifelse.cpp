#include <iostream>

using namespace std;

int main(){
    int age;
    cout << "welcome to the indian society" << endl << "enter the age" << endl;
    cin >> age;
    if(age<=18){
        cout<<"what is your 12th mark ma? which engg. college you gonna join?" << endl;
    }else if(age<=24){
        cout<<"where are you working? when is your marriage??" << endl;
    }else if(age<=30){
        cout<<"kanna? when are you gonna have kids?" << endl; 
    }
    else{
        cout<<"what are you gonna do next?"<<endl;
    }
    return 0;
}