/* #include<bits/stdc++.h>
using namespace std;
int MCM(int arr[],int left,int right,int n)
{
    if(left<0|| left>=n||right<0||right>=n)
    {
        return -1;
    }
    int ans=0;
    for(int i=left;i<right;i++)
    {
    int l=MCM(arr,left,i,n);
    int r=MCM(arr,i+1,right,n);
    ans=min(l,r);

    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<MCM(arr,0,n-1,n);
} */
/* A naive recursive implementation that simply
follows the above optimal substructure property */
#include <bits/stdc++.h>
using namespace std;

// Matrix Ai has dimension p[i-1] x p[i]
// for i = 1..n
int MatrixChainOrder(int p[], int i, int j)
{
	if (i == j)
		return 0;
	int k;
	int min = INT_MAX;
	int count;

	// place parenthesis at different places
	// between first and last matrix, recursively
	// calculate count of multiplications for
	// each parenthesis placement and return the
	// minimum count
	for (k = i; k < j; k++)
	{
		count = MatrixChainOrder(p, i, k)
				+ MatrixChainOrder(p, k + 1, j)
				+ p[i - 1] * p[k] * p[j];

		if (count < min)
			min = count;
	}

	// Return minimum count
	return min;
}


int main()
{
	int arr[] = { 1, 2, 5, 4, 3 };
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << " number of multiplications is "
		<< MatrixChainOrder(arr, 1, n - 1);
}


