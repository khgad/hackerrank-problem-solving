#include <bits/stdc++.h>

using namespace std;

int n, m;

vector<int> acmTeam(vector<string> topic)
{
    map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int ones = 0;
            for (int k = 0; k < m; k++)
            {
                ones += (topic[i][k] + (topic[j][k] - '0')) >= '1';
            }
            freq[ones]++;
        }
    }
    auto last = (--freq.end());
    vector<int> ans = {last->first, last->second};
    return ans;
}

int main()
{
    cin >> n >> m;
    vector<string> t(n);
    for (int i = 0; i < n; i++)
    {
        cin >> t.at(i);
    }
    auto result = acmTeam(t);
    cout << result[0] << "\n"
         << result[1];
    return 0;
}