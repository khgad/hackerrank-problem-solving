#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<vector<int>> matrix;
map<pair<int, int>, bool> visited;
int xDir[] = {1, -1, 0, 0, -1, 1, -1, 1};
int yDir[] = {0, 0, 1, -1, -1, 1, 1, -1};

bool valid(int i, int j)
{
    return i < n && j < m && i >= 0 && j >= 0;
}

int dfs(int i, int j, int total)
{
    visited[{i, j}] = true;
    for (int k = 0; k < 8; k++)
    {
        int i_new = i + xDir[k];
        int j_new = j + yDir[k];
        if (valid(i_new, j_new) && !visited[{i_new, j_new}] && matrix[i_new][j_new] == 1)
        {
            total = dfs(i_new, j_new, total + 1);
        }
    }
    return total;
}

int connectedCell()
{
    int mx = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 1 && !visited[{i, j}])
            {
                int connected_cells = dfs(i, j, 1);
                mx = max(mx, connected_cells);
            }
        }
    }

    return mx;
}

int main()
{
    cin >> n >> m;

    matrix.resize(n);

    for (int i = 0, x; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> x;
            matrix[i].push_back(x);
        }
    }

    int result = connectedCell();

    cout << result << "\n";

    return 0;
}
