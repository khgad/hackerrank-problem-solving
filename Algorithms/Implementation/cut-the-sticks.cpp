#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'cutTheSticks' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

vector<int> cutTheSticks(vector<int> arr)
{
    map<int, int> freq;
    int n = arr.size();
    vector<int> ans;
    for (int i : arr)
        freq[i]++;
    ans.push_back(n);
    for (auto num : freq)
    {
        n -= num.second;
        ans.push_back(n);
    }
    ans.pop_back();
    return ans;
}

int main()
{
    int n, x;
    vector<int> a;
    cin >> n;
    while (n--)
    {
        cin >> x;
        a.push_back(x);
    }
    vector<int> result = cutTheSticks(a);
    for (int i : result)
        cout << i << "\n";
    return 0;
}
