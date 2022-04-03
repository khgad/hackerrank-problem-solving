#include <bits/stdc++.h>

using namespace std;

int makingAnagrams(string s1, string s2)
{
    int differences = 0;
    map<char, int> freq;
    for (char c : s1)
        freq[c]++;
    for (char c : s2)
        freq[c]--;
    for (auto i : freq)
        differences += abs(i.second);
    return differences;
}

int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    int result = makingAnagrams(s1, s2);

    cout << result << "\n";

    return 0;
}
