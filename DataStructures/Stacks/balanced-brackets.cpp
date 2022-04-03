#include <bits/stdc++.h>

using namespace std;

string isBalanced(string s)
{
    stack<int> ss;
    map<char, char> close;
    close['('] = ')', close['{'] = '}', close['['] = ']';
    string ans = "YES";
    for (char c : s)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            ss.push(c);
        }
        else
        {
            if (ss.empty() || c != close[ss.top()])
            {
                ans = "NO";
                break;
            }
            ss.pop();
        }
    }
    return ss.empty() ? ans : "NO";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string result = isBalanced(s);
        cout << result << "\n";
    }

    return 0;
}