#include<bits/stdc++.h>

using namespace std;

int main() {


	int n, i, j, maxarea = INT_MIN, area;
	cin >> n;
	int height[n];
	for (i = 0; i < n; i++)
	{
		cin >> height[i];
	}

	j = n - 1;
	i = 0;
	while (i < j) {
		area = (j - i) * min(height[i], height[j]);
		maxarea = max(maxarea, area);
		if (height[i] < height[j]) {
			i++;
		}
		else {
			j--;
		}
	}
	cout << maxarea << " ";

}









