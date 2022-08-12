#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define size 100000
int  main()
{
	ll n, m, k;
	cin >> n >> m >> k;
	ll a[n + 1] = {0};
	for (ll i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	ll l[size], r[size], d[size];
	for (ll i = 1; i <= m; i++)
	{
		cin >> l[i] >> r[i] >> d[i];
	}
	ll count [size] = {0};
	ll diff[size] = {0};
	for (ll i = 0; i < k; i++)
	{
		ll x, y;
		cin >> x >> y;
		count[x] = count[x] + 1;
		count[y + 1] = count[y + 1] - 1;

	}

	for (ll i = 1; i <= m; i++)
	{
		count[i] = count[i] + count[i - 1];
	}

	for (ll i = 1; i <= m; i++)
	{
		diff[l[i]] = diff[l[i]] + count[i] * d[i];
		diff[r[i] + 1] = diff[r[i] + 1] - count[i] * d[i];
	}
	for (ll i = 1; i <= n; i++)
	{
		diff[i] = diff[i] + diff[i - 1];
	}
	for (ll i = 1; i <= n; i++)
	{
		a[i] = a[i] + diff[i];
	}
	for (ll i = 1; i <= n; i++)
	{
		cout << a[i] << " ";
	}







}