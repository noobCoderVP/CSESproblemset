#include <bits/stdc++.h>
using namespace std;

void weirdAlgorithm(long long &n)
{
    while (n != 1)
    {
        cout << n << " ";
        if (n % 2)
        {
            n = 3 * n + 1;
        }
        else
        {
            n = n / 2;
        }
    }
    cout << 1;
}

int main()
{
    long long n;
    cin >> n;
    weirdAlgorithm(n);
}