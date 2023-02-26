#include <bits/stdc++.h>
using namespace std;

void numberSpiral(unsigned long long &x, unsigned long long &y)
{
    cin >> x >> y;
    unsigned long long maxim = x > y ? x : y;
    unsigned long long minim = x < y ? x : y;
    unsigned long long answer;

    unsigned long long base = (maxim - 1) * (maxim - 1);
    if (maxim % 2 == 1)
    {
        answer = base + y + maxim - x;
    }
    else
    {
        answer = base + x + maxim - y;
    }
    cout << answer << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned long long x, y;
        numberSpiral(x, y);
    }
}