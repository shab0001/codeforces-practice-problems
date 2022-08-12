#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	double a[n];
	double sumpercent = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		sumpercent = sumpercent + (a[i] / 100);
	}

	double totalpercent = (sumpercent / n) * 100;
	cout << totalpercent;


}