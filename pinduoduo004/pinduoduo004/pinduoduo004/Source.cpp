#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>

using namespace std;

char g[102][102];
int sx, sy, fx, fy;


class Point
{
public:
	int x, y, key, step;
	Point(int xx, int yy, int k, int s)
	{
		x = xx;
		y = yy;
		key = k;
		step = s;
	}
};



int bfs(vector<vector<char>>& a, int startx, int starty)
{
	int res = 0;
	queue<Point> que;
	que.push(Point(startx, starty, 0, 0));
	vector<vector<int>> dir{ { -1,0 },{ 1,0 },{ 0,1 },{ 0,-1 } };//ÒÆ¶¯·½Ê½
	int visit[105][105][1200] = { 0 };




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