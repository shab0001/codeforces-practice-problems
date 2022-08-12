
#include<iostream>
using namespace std;
int main ()
{
	int n, i, j;
	cin >> n;
	int card[n], flag = 1, s, d;
	for (i = 0; i < n; i++)
	{
		cin >> card[i];
	}
	s = 0;
	d = 0;
	j = n - 1;
	i = 0;
	while (i <= j)
	{
		if (flag == 1)
		{
			if (card[i] > card[j] )
			{
				s = s + card[i];
				i++;
				flag = 0;

			}
			else
			{
				s = s + card[j];
				j--;
				flag = 0;

			}
		}
		else
		{

			if (card[i] > card[j])
			{
				d = d + card[i];
				i++;
				flag = 1;

			}

			else
			{
				d = d + card[j];
				j--;
				flag = 1;

			}

		}
	}
	cout << s << " " << d << endl;

}