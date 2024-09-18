#include<bits/stdc++.h>
using namespace std;

void mergeSort(int arr[], int l, int mid, int r)
{
    int sz = (r+l)-1;
    int temp[sz];

    int i = l;
    int j = mid + 1;
    int k = 0;

    while(i<=mid && j<=r)
    {
        if(arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else if(arr[j] < arr[i])
        {
            temp[k++] = arr[j++];
        }
    }
    while(i <= mid)
    {
        temp[k++] = arr[i++];
    }
    while(j <= r)
    {
        temp[k++] = arr[j++];
    }
    k = 0;

    for(int i=l; i<=r; i++)
    {
        arr[i] = temp[k++];
    }
}
void Sort(int arr[], int n)
{
    int p;
    for(p = 2; p <= n; p *= 2)
    {
        for(int i = 0; i+p-1 < n; i += p)
        {
            int l = i;
            int r = i+p-1;
            int mid = (l+r) / 2;

            mergeSort(arr, l, mid, r);
        }
    }
    if(p/2 < n)
    {
        mergeSort(arr, 0, p/2 - 1, n-1);
    }
}

void recursiveSort(int arr, int l, int r)
{
    if(l < r)
    {
        int mid = (l+r)/2;

        recursiveSort(arr, l, mid);
        recursiveSort(arr, mid+1, r);
        mergeSort(arr, l, mid, r);
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

    //mergeSort(arr,l,mid,r);
    //Sort(arr, n);
    recursiveSort(arr,0,5);

    cout<<"Sorted array: "<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
