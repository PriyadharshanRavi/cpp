/*Nested loop is basically a situation where there is a for loop inside a for loop*/
#include <iostream>

using namespace std;

int main(){
    int twod[3][2]={
        {1,2},
        {4,5},
        {7,8}
    };//So we are init the array and since it is 2d array we are specifically telling cpp like [3][2] where the outer array has 3 elements and each element has 2 elements inside
    
    
    for (int i = 0; i < 3; i++) //this helps to loop through outer array
    {
        for (int j = 0; j < 2; j++) // this helps to loop through each element inside the inner array
        {
            cout << twod[i][j];
        }
        cout << endl;
    }
    
    
    return 0;
}