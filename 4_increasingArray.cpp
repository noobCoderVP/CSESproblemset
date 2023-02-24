#include <bits/stdc++.h>
using namespace std;

void increasingArray(int &n)
{
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    unsigned long long total = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            total += arr[i - 1] - arr[i];
            arr[i] = arr[i - 1];
        }
    }
    cout << total;
}

int main()
{
    int n;
    cin >> n;

    increasingArray(n);
}