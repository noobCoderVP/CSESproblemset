#include <bits/stdc++.h>
using namespace std;

void missingNumber(int &n)
{
    map<int, bool> mp;
    int test;

    for (int i = 0; i < n - 1; i++)
    {
        cin >> test;
        mp[test] = true;
    }

    for (int i = 1; i <= n; i++)
    {
        if (mp[i])
        {
            continue;
        }
        else
        {
            cout << i << endl;
            break;
        }
    }
}
int main()
{
    int n;
    cin >> n;

    missingNumber(n);
}