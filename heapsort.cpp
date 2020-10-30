//heap sort

/*Steps:
1) Arrange the array in an almost complete binary tree
2) Build a max Heap
3) Correct the single Violation (max - heapify)
4) After arranging things, swap the greatest with smallest and 
discard the greatest and store it in an array
5) Reduce the indices and build max heap again and do max heapify
6) Do it till all the elements gets discarded from the tree*/

#include <iostream>
void print(int arr[], int n);
void heapify(int arr[], int n, int i);

using namespace std;

void heapify(int arr[], int n, int i){
    int largest = i;
    int left = (2*i) +1;
    int right = (2*i) + 2;
    if (left < n && arr[left] > arr[largest])
    {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest])
    {
        largest = right;
    }
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr,n,largest);
    }
    
}

void heapsort(int arr[], int n){
    for (int i = (n/2) - 1; i >=0; i--)
    {
        heapify(arr,n,i);
    }    
    for (int i = n-1 ; i >= 0; i--)
    {
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
}

void print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {16,4,10,14,7,9,3,2,8,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    heapsort(arr,n);
    cout << "Sorted array is: ";
    print(arr,n);
    return 0;
}


