#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'encryption' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string encryption(string s)
{

    string ns = "", ans = "";
    for (char c : s)
        if (c != ' ')
            ns += c;
    int n = ns.size();
    int r = sqrt(n), c = ceil(sqrt(n));
    for (int i = 0; i < c; i++)
    {
        for (int j = i; j < n; j += c)
        {
            ans += ns[j];
        }
        ans += " ";
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
