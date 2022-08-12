#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k, w;
	long long int n;
	cin >> k >> n >> w;
	int i = 1;
	while (n >= (i * k))
	{

		n = n - i * k;
		w--;
		i++;

	}
	int b = 0;
	if (w > 0)
	{
		while (w > 0)
		{
			b = b + i * k;
			i++;
			w--;
		}
		cout << b - n;
	}
	else
	{
		cout << b;
	}
}