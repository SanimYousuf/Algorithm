#include<bits/stdc++.h>
using namespace std;

/*
    Time complexity:
    Best case -> O(n^2)
    Worst case -> O(n^2)
    Not stable, In-place, not adaptive sorting algorithm & perform minimum number of swap.
*/

void selectionSort(int arr[], int n)
{
    for(int pass=0; pass<n-1; pass++)
    {
        int smallest_idx = pass;

        for(int i=pass+1; i<n; i++)
        {
            if(arr[i] < arr[smallest_idx])
            {
                smallest_idx = i;
            }
        }
        int temp = arr[pass];
        arr[pass] = arr[smallest_idx];
        arr[smallest_idx] = temp;

    }

}

int main()
{
    cout<<"Enter array size: "<<endl;
    int n;
    cin>>n;
    int arr[n];

    cout<<"Enter array elements: "<<endl;

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    selectionSort(arr,n);

    cout<<"Sorted array: "<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
