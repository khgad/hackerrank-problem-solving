#include <bits/stdc++.h>

using namespace std;

string twoStrings(string s1, string s2)
{
    string total = s1 + s2;

    set<char>
        ss1(s1.begin(), s1.end()),
        ss2(s2.begin(), s2.end()),
        t(total.begin(), total.end());

    return t.size() != ss1.size() + ss2.size() ? "YES" : "NO";
}

int main()
{
    int t;
    string s1, s2;

    cin >> t;

    while (t--)
    {
        cin >> s1 >> s2;

        string result = twoStrings(s1, s2);

        cout << result << "\n";
    }
    return 0;
}