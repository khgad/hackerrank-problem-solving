#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'breakingRecords' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY scores as parameter.
 */

vector<int> breakingRecords(vector<int> scores)
{

    vector<int> ans(2, 0);
    int mn, mx;
    mn = mx = scores[0];

    for (int i = 1; i < scores.size(); i++)
    {
        if (scores[i] > mx)
        {
            ans[0]++;
            mx = scores[i];
        }
        else if (scores[i] < mn)
        {
            ans[1]++;
            mn = scores[i];
        }
    }
    return ans;
}

int main()
{
    int n;

    cin >> n;

    vector<int> scores(n);

    for (int &i : scores)
        cin >> i;

    auto result = breakingRecords(scores);

    cout << result[0] << " " << result[1] << "\n";

    return 0;
}