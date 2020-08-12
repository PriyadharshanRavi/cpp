#include <iostream>

using namespace std;

int main(){
    string name="priyan here";
    cout << name<<endl;
    cout << name.length()<<endl;
    cout << name[0]<<endl;
    cout << name.find("a", 0)<<endl;//telling the fucntion to find a in the given phrase starting from char 0
    cout << name.substr(2,3)<<endl;//grab sub string. in () it is the starting positions and number of char after that
    return 0;
}