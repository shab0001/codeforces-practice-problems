#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin >> n;
	long long int i = 1, f = 0;
	while (i <= n)
	{
		f -= i;
		if (i != n)
		{
			f = f + (i + 1);

		}
		i += 2;
	}
	cout << f;
}