#include <bits/stdc++.h>

using namespace std;

string gameOfThrones(string s)
{
    map<char, int> freq;
    int odds = 0;

    for (char c : s)
        freq[c]++;

    for (auto p : freq)
        if (p.second % 2 == 1)
            odds++;

    return odds > 1 ? "NO" : "YES";
}

int main()
{
    string s;
    getline(cin, s);

    string result = gameOfThrones(s);

    cout << result << "\n";

    return 0;
}
