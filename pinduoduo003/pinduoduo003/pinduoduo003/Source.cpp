#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{

	int n;
	cin >> n;
	int *h = new int[n];
	for (int i = 0; i < n; i++)  cin >> h[i];

	int m;
	cin >> m;
	int *w = new int[m];
	for (int i = 0; i < m; i++) cin >> w[i];


	return 0;
}