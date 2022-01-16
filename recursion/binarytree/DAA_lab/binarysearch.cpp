/* #include<iostream>
#include<stdlib.h>
using namespace std;
void binarysearch(int arr[],int low,int high, int target)
{
   
    
    
    while(low<=high)
    {
       int mid= low+(high-low)/2;
       if(arr[mid]==target)
       {
           cout<<"found";
    
           
       }
       if(arr[mid]>target)
       {
          
    high=mid-1;
       } 
     
      else
       {
           
      low=mid+1;
       }
       
    }

}

 
int main()
{  

    int arr[]={3,4,10,40,2,4};
      int size= (sizeof(arr)/sizeof(arr[0]));
    int target =4;
   binarysearch(arr,0,size-1,target);

} */
/* #include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;

		
		if (arr[mid] == x)
			return mid;
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);

		
		return binarySearch(arr, mid + 1, r, x);
	}

	
	return -1;
}

int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binarySearch(arr, 0, n - 1, x);
	(result == -1)
		? cout << "Element is not present in array"
		: cout << "Element is present at index " << result;
	return 0;
}
 */
#include <iostream>
using namespace std;

int search(int arr[], int n, int x)
{
	int i;
	for (i = 0; i < n; i++)
		if (arr[i] == x)
			return i;
	return -1;
}

int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);

	
	int result = search(arr, n, x);
	(result == -1)
		? cout << "Element is not present in array"
		: cout << "Element is present at index " << result;
	return 0;
}
