#include <bits/stdc++.h>
using namespace std;

unsigned long long MOD = 1000000007;

unsigned long long bitStrings(int &n)
{
    unsigned long long answer = 1;
    while (n--)
    {
        answer = (answer % MOD) * 2;
    }
    return answer % MOD;
}

int main()
{
    int n;
    cin >> n;
    cout << bitStrings(n) << endl;
}