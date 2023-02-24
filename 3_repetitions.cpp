#include <bits/stdc++.h>
using namespace std;

void repetitions(string &str)
{
    int firstPointer = 0;
    int secondPointer = 0;
    int countMax = 0;
    int countCurrent = 0;
    int n = str.size();

    while (firstPointer < n and secondPointer < n)
    {
        if (str[secondPointer] == str[firstPointer])
        {
            countCurrent++;
            countMax = max(countCurrent, countMax);
            secondPointer++;
        }
        else
        {
            firstPointer = secondPointer;
            countCurrent = 0;
        }
    }

    cout << countMax;
}

int main()
{
    string str;
    cin >> str;
    repetitions(str);
}