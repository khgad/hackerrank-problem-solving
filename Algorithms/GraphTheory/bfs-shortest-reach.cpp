#include <bits/stdc++.h>

using namespace std;

vector<int> bfs(int n, int m, vector<vector<int>> edges, int s)
{
    vector<int> ans(n + 1, -1);
    vector<int> visited(n + 1, false);
    vector<int> depth(n + 1, 0);
    queue<int> q;
    visited[s] = 1;
    q.push(s);
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int u : edges[v])
        {
            if (!visited[u])
            {
                q.push(u);
                depth[u] = depth[v] + 1;
                ans[u] = depth[u] * 6;
                visited[u] = 1;
            }
        }
    }
    return ans;
}

int main()
{
    int q, n, m, s;
    cin >> q;
    while (q--)
    {
        cin >> n >> m;
        vector<vector<int>> edges(n + 1);
        int u, v;
        for (int i = 0; i < m; i++)
        {
            cin >> u >> v;
            edges[u].push_back(v);
            edges[v].push_back(u);
        }
        cin >> s;
        auto result = bfs(n, m, edges, s);
        for (int i = 1; i <= n; i++)
        {
            if (i == s)
                continue;
            cout << result[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
