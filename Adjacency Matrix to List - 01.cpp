#include <bits/stdc++.h>
using namespace std;

// Function to convert adjacency matrix to adjacency list
vector<vector<int>> matrixToList(vector<vector<int>>& matrix) {
    int nodes = matrix.size();
    vector<vector<int>> adj_list(nodes);

    for (int i = 0; i < nodes; i++) {
        for (int j = 0; j < nodes; j++) {
            if (matrix[i][j] == 1) {
                adj_list[i].push_back(j);
            }
        }
    }
    return adj_list;
}

int main() {
    int nodes = 4;
    vector<vector<int>> matrix = {
        {0, 1, 0, 0},
        {1, 0, 1, 1},
        {0, 1, 0, 1},
        {0, 1, 1, 0}
    };

    vector<vector<int>> adj_list = matrixToList(matrix);

    for (int i = 0; i < nodes; i++) {
        cout << i << " -> ";
        for (int j : adj_list[i]) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
