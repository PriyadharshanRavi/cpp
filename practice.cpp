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