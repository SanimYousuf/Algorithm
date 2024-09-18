#include<bits/stdc++.h>
using namespace std;

insertionSort(int arr[], int n)
{
    for(int pass=0; pass<n; pass++)
    {
        int temp = arr[pass];
        int j = pass - 1;
        while(j >= 0 && arr[j] > temp)
        {
            if(arr[j] > temp)
            {
                arr[j+1] = arr[j];
            }
            j--;
        }
        arr[j+1] = temp;
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
    insertionSort(arr,n);

    cout<<"Sorted array: "<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
