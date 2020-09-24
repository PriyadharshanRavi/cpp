//print alphabet triangle
 
#include <iostream>

using namespace std;

int main(){
    char ch = 'A';
    int rows;
    cout<<"enter the number of rows: ";
    cin>>rows;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}