#include <bits/stdc++.h>

using namespace std;

int introTutorial(int V, vector<int> arr) {
    return (upper_bound(arr.begin(), arr.end(), V) - arr.begin())-1;
}

int main()
{
    int v, n;

    cin >> v >> n;

    vector<int> arr(n);

    for(int& i : arr)
        cin >> i;
    
    int result = introTutorial(v, arr);

    cout << result << "\n";
    
    return 0;
}