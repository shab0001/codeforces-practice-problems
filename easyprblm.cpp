#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, flag = 0;
	cin >> n;
	bool a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 1)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		cout << "HARD";
	}
	else
	{
		cout << "EASY";
	}


}