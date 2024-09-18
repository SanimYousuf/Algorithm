#include<bits/stdc++.h>
using namespace std;

//Adjacency matrix:
//Time complexity -> O(n^2)
//Space complexity -> O(n^2)

int main() {

    int nodes = 4;  //O(1)
    int matrix[nodes][nodes];   //O(n^2)

    memset(matrix, 0, sizeof(matrix));

    //O(E) -> E = Number of edge;   E(maximum) = n^2
    matrix[0][1] = 1;
    matrix[1][0] = 1;

    matrix[1][2] = 1;
    matrix[2][1] = 1;

    matrix[2][3] = 1;
    matrix[3][2] = 1;

    matrix[3][1] = 1;
    matrix[1][3] = 1;

    for(int i=0; i<nodes; i++) {    //O(n^2)
        for(int j=0; j<nodes; j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
