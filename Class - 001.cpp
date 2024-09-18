#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the array size: ";
    cin>>n;

    int arr[n];

    cout<<"Enter your array values: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the array position where you want to insert data: ";
    int m;
    cin>>m;

    cout<<"Enter your desired value: ";
    cin>>arr[m-1];

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
}
