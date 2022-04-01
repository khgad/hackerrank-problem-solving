#include <bits/stdc++.h>

using namespace std;

vector<int> missingNumbers(vector<int> arr, vector<int> brr) {
    map<int, int> A;
    vector<int> ans;
    for(int i : arr)
        A[i]--;
    for(int i : brr){
        A[i]++;
        if(A[i] == 1)
            ans.push_back(i);
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int n, m;

    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr.at(i);
    }

    cin >> m;

    vector<int> brr(m);

    for(int i = 0; i < m; i++){
        cin >> brr.at(i);
    }

    auto result = missingNumbers(arr, brr);

    for(int i : result){
        cout << i << " ";
    }

    cout << "\n";

    return 0;
}