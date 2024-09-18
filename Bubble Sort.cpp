#include<bits/stdc++.h>
using namespace std;

/*
Time complexity:
Best case -> O(n)
Worst case -> O(n^2)
*/

void bubbleSort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int flag = 0;
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag++;
            }
        }
        if(flag == 0)
        {
            break;
        }
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
    bubbleSort(arr,n);

    cout<<"Sorted array: "<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
