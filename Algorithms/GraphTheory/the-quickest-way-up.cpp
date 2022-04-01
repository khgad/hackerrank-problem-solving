#include <bits/stdc++.h>

using namespace std;

int quickestWayUp(map<int, int> ladders, map<int, int> snakes)
{
    int u, v;
    queue<int> q;
    vector<int> visited(101, false);
    vector<int> depth(101, 0);
    q.push(1);
    visited[1] = 1;
    while (!q.empty())
    {
        v = q.front();
        q.pop();
        for (int i = 0; i <= 6 && v + i <= 100; i++)
        {
            u = v + i;
            if (ladders[u] != 0)
                u = ladders[u];
            else if (snakes[u] != 0)
                u = snakes[u];
            if (!visited[u])
            {
                depth[u] = depth[v] + 1;
                visited[u] = 1;
                q.push(u);
                if (u == 100)
                    break;
            }
        }
    }
    return depth[100] ? depth[100] : -1;
}

int main()
{
    int t, n, m;
    cin >> t;
    while (t--)
    {
        map<int, int> ladders, snakes;
        int u, v;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> u >> v;
            ladders[u] = v;
        }
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            cin >> u >> v;
            snakes[u] = v;
        }
        int result = quickestWayUp(ladders, snakes);
        cout << result << "\n";
    }

    return 0;
}
