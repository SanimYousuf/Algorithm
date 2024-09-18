#include<bits/stdc++.h>
using namespace std;

string getCapital(string str)
{
    if(str == " ")
    {
        return 0;
    }
    if(isupper(str[0]))
    {
        return string(1,str[0]);
    }
    return getCapital(str.substr(1));
}

int main()
{
    string str;
    cin>>str;

    cout<<getCapital(str)<<endl;

    return 0;
}
