//Edge List:
/*
    [
        [0,1]
        [1,2]
        [1,3]
        [2,3]
    ]
*/

#include<bits/stdc++.h>
using namespace std;

//Time & space complexity -> O(E) & in worst cases O(n^2)

int main()
{
    int nodes = 4;
    vector<vector<int>>edge_list;

    edge_list.push_back({0,1});
    edge_list.push_back({1,2});
    edge_list.push_back({1,3});
    edge_list.push_back({3,2});

    for(int i=0; i<edge_list.size(); i++) {
        cout<<edge_list[i][0]<<" "<<edge_list[i][1]<<endl;
    }

    return 0;
}
