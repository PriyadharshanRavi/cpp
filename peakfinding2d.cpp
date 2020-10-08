//peak finding 2D 

#include <iostream>

using namespace std;

int main(){
    int n,m;
    cout << "enter the number of row: " ;
    cin >> n;
    cout << "enter the number of columns: ";
    cin >> m;
    int arr[n][m] = {};
    cout << "enter the array: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
        
    }
    cout << "the array you have entered is: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j]<< ", ";
        }
        cout << endl;
    }
    
    //finding middle column

    int mid = m/2;
    int peak = arr[0][0];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < mid; j++)
        {
            if (peak < arr[i][j])
            {
                peak = arr[i][j];
            }
            
        }
        
    }

    cout << "at this point the peak is: " << peak<<endl;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = mid; j < m; j++)
        {
            if (peak < arr[i][j])
            {
                peak = arr[i][j];
            }
            
        }
        
    }

    cout << "at the end the peak is: " << peak<<endl;
    

    
    return 0;
}