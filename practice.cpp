//merge sort nlogn

#include <iostream>

using namespace std;

int main(){
    int lprime[4]={1,3,5,7};
    int rprime[4]={2,4,6,8};
    int limit =3, l = 0, r = 0, ele, k;
    int sorted[8];
    cout << "L Prime: ";
    for (int i = 0; i <=limit; i++)
    {
        cout << lprime[i]<<", ";
    }
    cout<<endl<< "R Prime: ";
    for (int j = 0; j <=limit; j++)
    {
        cout << rprime[j]<<", ";
    }
    cout<<endl << "sorted array: ";
    for (k = 0; l<=limit && r <= limit; k++)
    {
        if (lprime[l] < rprime[r])
        {
            ele = lprime[l];
            sorted[k] = ele;
            l++;
        }else{
            ele = rprime[r];
            sorted[k]=ele;
            r++;
        }
    }
    while (l<=limit)
    {
        ele = lprime[l];
        sorted[k]=ele;
        l++;
        k++;
    }
    while (r<=limit)
    {
        ele = rprime[r];
        sorted[k] = ele;
        r++;
        k++;
    }

    for (int n = 0; n < 8; n++)
    {
        cout << sorted[n] << ", ";
    }
    
    
    
    
    
    return 0;    
}