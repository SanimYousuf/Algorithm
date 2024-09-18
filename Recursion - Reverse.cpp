#include<bits/stdc++.h>
using namespace std;

string Reverse(string str)
{
    if(str == "" || str.size() == 1)
    {
        return str;
    }
    return Reverse(str.substr(1)) + str[0];
}


int main()
{
    string str;
    cin>>str;

    cout<<Reverse(str)<<endl;

    return 0;
}
