#include <bits/stdc++.h>

using namespace std;

string pangrams(string s)
{
    map<char, int> freq;

    for (char c : s)
        if (!isspace(c))
            freq[tolower(c)]++;

    return freq.size() == 26 ? "pangram" : "not pangram";
}

int main()
{
    string s;
    getline(cin, s);

    string result = pangrams(s);

    cout << result << "\n";

    return 0;
}