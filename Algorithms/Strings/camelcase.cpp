#include <bits/stdc++.h>

using namespace std;

int camelcase(string s)
{
    int cnt = 0;

    for (char c : s)
        if (isupper(c))
            cnt++;

    return cnt + 1;
}

int main()
{
    string s;
    getline(cin, s);

    int result = camelcase(s);

    cout << result << "\n";

    return 0;
}
