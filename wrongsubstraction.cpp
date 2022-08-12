#include<iostream>
using namespace std;
int main ()
{
	int n, k, i, last;
	cin >> n >> k;
	i = 1;
	while (i <= k)
	{
		last = n % 10;
		if (last == 0) {
			n = n / 10;
		}
		else
		{	n = n - 1;

		}
		i++;

	}
	cout << n;

}