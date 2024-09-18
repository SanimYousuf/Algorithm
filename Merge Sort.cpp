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
        temp[k++] = arr[l++];
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

int main()
{
    cout<<"Enter array size: "<<endl;
    int n,l,r,mid;
    cin>>n;
    int arr[n];

    cout<<"Enter array elements: "<<endl;

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the value of Left index: ";
    cin>>l;
    cout<<"Enter the value of Right index: ";
    cin>>r;
    cout<<"Enter the value of Mid index: ";
    cin>>mid;

    mergeSort(arr,l,mid,r);

    cout<<"Sorted array: "<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
