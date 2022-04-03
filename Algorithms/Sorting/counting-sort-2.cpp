#include <bits/stdc++.h>

using namespace std;

vector<int> countingSort(vector<int> arr)
{
    vector<int> freq(100, 0);
    for (int i : arr)
        freq[i]++;
    vector<int> ans;
    for (int i = 0; i < 100; i++)
        while (freq[i]--)
            ans.push_back(i);
    return ans;
}

int main()
{
    int n;

    cin >> n;

    vector<int> arr(n);

    for (int &i : arr)
        cin >> i;

    auto result = countingSort(arr);

    for (int i : result)
        cout << i << " ";
    cout << "\n";

    return 0;
}