#include <bits/stdc++.h>

using namespace std;

void printArray(int n, vector<int> arr)
{
    cout << arr[0];
    for (int i = 1; i < n; i++)
    {
        cout << " " << arr[i];
    }
    cout << "\n";
}

void insertionSort2(int n, vector<int> arr)
{
    int i = 1;
    while (i < n)
    {
        int j = i;
        while (arr[j] < arr[j - 1])
        {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
        printArray(n, arr);
        i++;
    }
}

int main()
{
    int n;

    cin >> n;
    vector<int> arr(n);

    for (int &i : arr)
        cin >> i;

    insertionSort2(n, arr);

    return 0;
}