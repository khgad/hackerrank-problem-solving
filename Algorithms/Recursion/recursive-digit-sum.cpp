#include <bits/stdc++.h>

using namespace std;

int digitsSum(string s)
{
    if (s.length() == 1)
        return stoi(s);

    int sum = 0;
    for (char d : s)
    {
        sum += (d - '0');
    }

    s = to_string(sum);

    return digitsSum(s);
}

int superDigit(string s, int k)
{
    int ans = digitsSum(s);

    string new_s = to_string(ans * k);

    ans = digitsSum(new_s);

    return ans;
}

int main()
{
    string s;

    int k;

    cin >> s >> k;

    int result = superDigit(s, k);

    cout << result << "\n";

    return 0;
}