#include <iostream>
using namespace std;
int main ()
{
	int n, t, i, j, k, flag;
	cin >> t;
	while (t--)
	{
		cin >> n;
		int a[n], b[n];
		for (i = 0; i < n; i++)
		{
			cin >> a[i];

		}
		i = 0;
		j = n - 1;
		k = 0;
		flag = 1;
		while (i <= j)
		{
			if (flag == 1)
			{
				b[k] = a[i];
				i++;
				flag = 0;
			}
			else
			{
				b[k] = a[j];
				j--;
				flag = 1;
			}
			k++;

		}
		for (i = 0; i < n; i++)
		{
			cout << b[i] << " " ;
		}
		cout << endl;
	}



}