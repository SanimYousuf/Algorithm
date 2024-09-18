#include<bits/stdc++.h>
using namespace std;

int sum(int n) {
    if(n == 1)
    {
        return 1;
    }
    return sum(n-1) + n;
}

int main()
{
    int n;
    cin>>n;

    int r = sum(n);
    cout<<"The sum of n number is: "<<r<<endl;

    return 0;
}
