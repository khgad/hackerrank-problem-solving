#include <bits/stdc++.h>

using namespace std;

struct pos
{
    int i, j;
    int length;
    string moves;
    pos(int i, int j, int length, string moves)
    {
        this->i = i;
        this->j = j;
        this->length = length;
        this->moves = moves;
    }
};

int n;
string dirs[] = {"UL", "UR", "R", "LR", "LL", "L"};
map<string, pair<int, int>> dir_value = {
    {"UL", {-2, -1}}, {"UR", {-2, 1}}, {"R", {0, 2}}, {"LR", {2, 1}}, {"LL", {2, -1}}, {"L", {0, -2}}};

bool valid(int i, int j)
{
    return i < n && j < n && i >= 0 && j >= 0;
}

void printShortestPath(int i_start, int j_start, int i_end, int j_end)
{

    queue<pos> q;
    map<pair<int, int>, bool> visited;

    q.push({i_start, j_start, 0, ""});
    visited[{i_start, j_start}] = true;
    while (!q.empty())
    {
        pos f = q.front();
        q.pop();
        if (f.i == i_end && f.j == j_end)
        {
            cout << f.length << "\n"
                 << f.moves << "\n";
            return;
        }
        for (string d : dirs)
        {
            int i_new = f.i + dir_value[d].first;
            int j_new = f.j + dir_value[d].second;

            if (valid(i_new, j_new) && !visited[{i_new, j_new}])
            {
                pos next(i_new, j_new, f.length + 1, f.moves + d + " ");
                q.push(next);
                visited[{i_new, j_new}] = true;
            }
        }
    }
    cout << "Impossible\n";
}

int main()
{
    cin >> n;

    int i_start, j_start, i_end, j_end;

    cin >> i_start >> j_start >> i_end >> j_end;

    printShortestPath(i_start, j_start, i_end, j_end);

    return 0;
}
