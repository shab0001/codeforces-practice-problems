#include<iostream>
using namespace std;
int main()
{
	long long int n, digit, l;
	cin >> digit;
	n = 0;
	while (digit > 0)
	{
		l = digit % 10;
		if (l == 4 or l == 7)
		{
			n++;
		}

		digit = digit / 10;
	}

	if (n == 4 or n == 7)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

}