#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, i, j, k, count = 0;
	cin >> n >> k;
	int a[n];
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	i = 0;
	j = n - 1;
	while (i <= j)
	{
		if (a[i] <= k)
		{
			i++;
			count++;
		}
		else if (a[j] <= k)
		{
			j--;
			count++;
		}
		else
		{
			break;
		}
	}
	cout << count;


}