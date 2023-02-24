#include <bits/stdc++.h>
using namespace std;

void permutations(int &n)
{
    if (n == 1)
    {
        cout << 1;
    }
    else if (n < 4)
    {
        cout << "NO SOLUTION";
    }
    else
    {
        int i;

        i = 2;
        while (i <= n)
        {
            cout << i << " ";
            i += 2;
        }

        i = 1;
        while (i <= n)
        {
            cout << i << " ";
            i += 2;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    permutations(n);
}