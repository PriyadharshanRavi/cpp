/*2D Array is basically an array where every single element inside an array is basically an
array. Eg: {{1,2,3}, {4,5,6}}*/
#include <iostream>

using namespace std;

int main(){
    int twod[3][2]={
        {1,2},
        {4,5},
        {7,8}
    };//So we are init the array and since it is 2d array we are specifically telling cpp like [3][2] where the outer array has 3 elements and each element has 2 elements inside
    cout << twod[2][1];
    
    return 0;
}


/*
#include <iostream>

using namespace std;

int main(){
    int twod[3][2];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> twod[i][j];
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << twod[i][j];
        }
        cout<< endl;
    }
    
    
}
*/