/* 
#include<bits/stdc++.h>
using namespace std;

int getmax(int arr[],int n)
{
    int  k=arr[0];
    for(int i=0;i<n;i++)
    {
        k=max(k,arr[i]);
    }
    return k;
}
void countsort(int arr[],int n,int pos)
{
    
    int count[10]={0};
    for(int i=0;i<n;i++)
    {
        count[(arr[i]/pos)%10]++;
    }
    for(int i=0;i<n;i++)
    {

        count[i]+=count[i-1];
    }
    int out[n];
        for(int i=n-1;i>=0;i--)
        {
            out[--count[(arr[i]/pos)%10]]=arr[i];
        }
     for(int i=0;i<n;i++)
     {
         arr[i]=out[i];
     }
}

void radixsort(int arr[],int n,int pos)
{
 int max=getmax(arr,n);

 for(pos=1;max/pos>0;pos=pos*10)
 {
     countsort(arr,n,pos);
 }
}
int main()
{
    int arr[]={200,634,489,845,878,399,412,978,445,189};
    int n=sizeof(arr)/sizeof(arr[0]);
    radixsort(arr,9,n);
    for(int i=0;i<10;i++)
    {
        cout<<arr[i];
    }
} */
// Radix Sort in C++ Programming

#include <iostream>
using namespace std;

// Function to get the largest element from an array
int getMax(int array[], int n) {
  int max = array[0];
  for (int i = 1; i < n; i++)
    if (array[i] > max)
      max = array[i];
  return max;
}

// Using counting sort to sort the elements in the basis of significant places
void countingSort(int array[], int size, int place) {
  const int max = 10;
  int output[size];
  int count[max];

  for (int i = 0; i < max; ++i)
    count[i] = 0;

  // Calculate count of elements
  for (int i = 0; i < size; i++)
    count[(array[i] / place) % 10]++;

  // Calculate cumulative count
  for (int i = 1; i < max; i++)
    count[i] += count[i - 1];

  // Place the elements in sorted order
  for (int i = size - 1; i >= 0; i--) {
    output[count[(array[i] / place) % 10] - 1] = array[i];
    count[(array[i] / place) % 10]--;
  }

  for (int i = 0; i < size; i++)
    array[i] = output[i];
}

// Main function to implement radix sort
void radixsort(int array[], int size) {
  // Get maximum element
  int max = getMax(array, size);

  // Apply counting sort to sort elements based on place value.
  for (int place = 1; max / place > 0; place *= 10)
    countingSort(array, size, place);
}

// Print an array
void printArray(int array[], int size) {
  int i;
  for (i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}

// Driver code
int main() {
  int array[] = {121, 432, 564, 23, 1, 45, 788};
  int n = sizeof(array) / sizeof(array[0]);
  radixsort(array, n);
  printArray(array, n);
}