#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;

    if(n >= 80)
    {
        cout<<"It's an A+"<<endl;
    }
    else if(n >= 75)
    {
        cout<<"It's an A"<<endl;
    }
    else if(n >= 70)
    {
        cout<<"It's an A-"<<endl;
    }
    else if(n >= 65)
    {
        cout<<"It's a B+"<<endl;
    }
    else if(n >= 60)
    {
        cout<<"It's a B"<<endl;
    }
    else if(n >= 55)
    {
        cout<<"It's a B-"<<endl;
    }
    else if(n >= 50)
    {
        cout<<"It's a C+"<<endl;
    }
    else if(n >= 45)
    {
        cout<<"It's a C"<<endl;
    }
    else if(n >= 40)
    {
        cout<<"It's a D"<<endl;
    }
    else if(n <40)
    {
        cout<<"It's a F"<<endl;
    }


    return 0;
}
