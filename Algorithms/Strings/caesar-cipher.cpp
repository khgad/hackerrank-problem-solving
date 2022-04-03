#include <bits/stdc++.h>

using namespace std;

string caesarCipher(string s, int k)
{
    int n = s.size();

    for (char &c : s)
    {
        if (islower(c))
        {
            c = (c + k - 19) % 26 + 97;
        }
        else if (isupper(c))
        {
            c = (c + k - 13) % 26 + 65;
        }
    }

    return s;
}

int main()
{
    int n, k;
    string s;

    cin >> n >> s >> k;

    string result = caesarCipher(s, k);

    cout << result << "\n";

    return 0;
}
