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

	int count = 0;
	sort(h, h + n);
	sort(w, w + m);
	int i, j = 0;
	while(i<n&&j<m)
	{
		if (h[i] <= w[j])
		{
			count++;
			i++;
			j++;
		}
		else
		{
			j++;
		}
			
	}


	cout << count << endl;
	return 0;
}