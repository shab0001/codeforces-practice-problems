#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    int mini = INT_MAX;
    int diff, j;
    for (int i = 1; i <= n; i++)
    {
        if (i == n)
        {
            j = n - (i - 1);
        }
        else
        {
            j = i + 1;
        }
        diff = abs(a[i] - a[j]);
        mini = min(mini, diff);


    }

    for (int i = 1; i <= n; i++)
    {
        if (i == n)
        {
            j = n - (i - 1);
        }
        else
        {
            j = i + 1;
        }
        if (mini == abs(a[i] - a[j]))
        {
            cout << i << " " << j;
            break;
        }
    }
}
