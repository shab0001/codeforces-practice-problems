#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, h;
	cin >> n >> h;
	int f[n];
	for (int i = 0; i < n; i++)
	{
		cin >> f[i];
	}
	int width = 0;
	for (int i = 0; i < n; i++)
	{
		if (f[i] <= h)
		{
			width += 1;
		}
		else
		{
			width += 2;
		}
	}
	cout << width;
}