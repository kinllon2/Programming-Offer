#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>

using namespace std;

char g[102][102];
int sx, sy, fx, fy;


int bfs(vector<vector<char>>& a, int startx, int starty)
{
	
}




int main()
{
	int m = 0, n = 0;
	cin >> m >> n;
	int x, y;
	vector<vector<char>> rect(n, vector<char>(m));

	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin >> rect[i][j];
			if (rect[i][j] == '2') { sx = i; sy = j; }
			if (rect[i][j] == '3') { fx = i; fy = j; }
		}

	}
	
	cout<< bfs(rect, sx, sy) <<endl;

	return 0;
}