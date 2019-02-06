#include<iostream>
#include<vector>
#include<algorithm>
#include <functional>
using namespace std;


int main()
{
	int temp;//用于输入流暂存数据
	vector<long long>  max;
	vector<long long>  min;
	int n;
	cin >> n;
	while(n--)
	{
		cin >> temp;
		sort(max.begin(), max.end(), greater<long long>());
		sort(min.begin(),min.end());
		if (max.size() < 3) max.push_back(temp);
		else if (temp > max[2]) max[2] = temp;
		if (min.size() < 2) min.push_back(temp);
		else if (temp < min[1]) min[1] = temp;
	}
	sort(max.begin(), max.end(), greater<int>());
	sort(min.begin(), min.end());
	long long a = max[0] * max[1] * max[2];
	long long b = min[0] * min[1] * max[0];
	cout << (a > b ? a : b) << endl;

	return 0;
}