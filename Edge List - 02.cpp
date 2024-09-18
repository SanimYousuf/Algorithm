//Weighted edge list:

/*
    [
        [0,1,2]
        [1,2,4]
        [1,3,9]
        [2,3,1]
    ]
*/
#include<bits/stdc++.h>
using namespace std;

//Time & space complexity -> O(E) & in worst cases O(n^2)

int main()
{
    int nodes = 4;
    vector<vector<int>>edge_list = {
        {0,1,2},
        {1,2,4},
        {1,3,9},
        {2,3,1}
    };

    for(int i=0; i<edge_list.size(); i++) {
        cout<<edge_list[i][0]<<" -> "<<edge_list[i][1]<<" | "<<edge_list[i][2]<<endl;
    }

    return 0;
}
