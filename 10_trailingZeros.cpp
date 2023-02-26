#include <bits/stdc++.h>
using namespace std;

int trailingZeros(int &n)
{
    int total = 0;
    while (n > 0)
    {
        n /= 5;
        total += n;
    }
    return total;
}

int main()
{
    int n;
    cin >> n;
    cout << trailingZeros(n) << endl;
}