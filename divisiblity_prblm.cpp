#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long int a, b;
		cin >> a >> b;
		long long int n = a % b;
		if (n != 0)
		{
			cout << b - n << endl;
		}
		else
		{
			cout << n;
		}
	}
}