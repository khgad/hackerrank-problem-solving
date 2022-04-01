#include <bits/stdc++.h>

using namespace std;

int n, m, k, i_start, j_start, i_end, j_end, decisions;
vector<string> matrix;
map<pair<int, int>, int> waves;
map<pair<int, int>, bool> visited;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

bool valid(int i, int j)
{
    return i < n && j < m && i >= 0 && j >= 0;
}

void dfs(int i, int j, int w)
{

    visited[{i, j}] = true;
    waves[{i, j}] = w;

    if (i == i_end && j == j_end)
        return;

    vector<pair<int, int>> neighbors;

    for (int k = 0; k < 4; k++)
    {
        int i_new = i + dx[k];
        int j_new = j + dy[k];
        if (valid(i_new, j_new) && matrix[i_new][j_new] != 'X')
            neighbors.push_back({i_new, j_new});
    }

    if (neighbors.size() > 2 || (i == i_start && j == j_start && neighbors.size() >= 2))
        w++;

    for (auto p : neighbors)
    {

        int to_i = p.first;
        int to_j = p.second;

        if (!visited[{to_i, to_j}])
        {
            dfs(to_i, to_j, w);
        }
    }
}

string countLuck()
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 'M')
                i_start = i, j_start = j;
            else if (matrix[i][j] == '*')
                i_end = i, j_end = j;
        }
    }

    dfs(i_start, j_start, 0);
    decisions = waves[{i_end, j_end}];
    // cout << "decisions : " << decisions << "\n";
    return decisions == k ? "Impressed" : "Oops!";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        cin >> n >> m;

        matrix.clear();
        visited.clear();
        waves.clear();
        matrix.resize(n);

        for (int i = 0; i < n; i++)
        {
            cin >> matrix.at(i);
        }

        cin >> k;

        string result = countLuck();

        cout << result << "\n";
    }

    return 0;
}