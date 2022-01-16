#include<iostream>
using namespace std;

void findMinMax(int arr[], int low, int high, int &min, int &max)
{
    
 
    if (low == high)                   
    {
        if (max < arr[low]) {         
            max = arr[low];
        }
 
        if (min > arr[high]) {         
            min = arr[high];
        }
 
        return;
    }
       int mid = (low + high) / 2;
 
    
    findMinMax(arr, low, mid, min, max);
 
    
    findMinMax(arr, mid + 1, high, min, max);
}
int main()
{
   int arr[] = { 7, 2, 9, 3, 1, 6, 7, 8, 4 };
 
   
    int max = arr[0], min = arr[0];
 
    int n = sizeof(arr)/sizeof(arr[0]);
    findMinMax(arr, 0, n - 1, min, max);
    
    cout << "The minimum array element is " << min << endl;
    cout << "The maximum array element is " << max << endl;
}