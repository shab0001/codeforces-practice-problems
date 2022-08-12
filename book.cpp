#include<iostream>
using namespace std;
int main()
{
	int n, total_t_given, i, b ;
	cin >> n >> total_t_given;
	int a[n];
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int total_t_consumed = 0;
	b = 0;
	int j = 0;
	for (i = 0; i < n; i++)
	{
		total_t_consumed = total_t_consumed + a[i];
		b++;
		if (total_t_consumed > total_t_given)
		{
			total_t_consumed = total_t_consumed - a[i];
			j++;
			b--;
		}

	}
	cout << b;

}
