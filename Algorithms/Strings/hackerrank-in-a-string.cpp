#include <bits/stdc++.h>

using namespace std;

string hackerrankInString(string s)
{
    int i = 0, j = 0, n = s.size();
    string goal = "hackerrank";
    
    while (i < n)
    {
        if (s[i] == goal[j])
        {
            j++;
        }
        i++;
    }

    return j == goal.size() ? "YES" : "NO";
}

int main()
{
    int t;
    string s;

    cin >> t;

    while (t--)
    {
        cin >> s;

        string result = hackerrankInString(s);

        cout << result << "\n";
    }
    return 0;
}