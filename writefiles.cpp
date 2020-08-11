#include <iostream>
#include <fstream> //allows us to stream through text files
using namespace std;

int main(){
    ofstream myfiles;
    myfiles.open("file1.txt");
    myfiles<<"this sentence is going inside file1.\n";
    myfiles.close();
    return 0;
}