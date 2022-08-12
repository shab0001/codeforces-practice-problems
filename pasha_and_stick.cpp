#include<iostream>
using namespace std;
int main()
{
	int n, m, a;
	cin >> n >> m >> a;
	int flag = a * a;
	int square = n * m;
	cout << square / flag;
}