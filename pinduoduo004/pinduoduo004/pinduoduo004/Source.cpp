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
	vector<vector<int>> dir{ { -1,0 },{ 1,0 },{ 0,1 },{ 0,-1 } };//移动方式
	int visit[105][105][1200] = { 0 };

	while(que.empty() ==false)
	{
		auto top = que.front();
		que.pop();


		for (auto d : dir)
		{
			//撞墙
			int x = top.x + d[0], y = top.y + d[1];
			if (x < 0 || x >= a.size() || y < 0 || y >= a[0].size() || a[x][y] == '0')
				continue;

			//遇到钥匙去做添加
			int key = top.key;
			if (a[x][y] >= 'a' && a[x][y] <= 'z')
				key = (key | (1 << (a[x][y] - 'a')));


			//遇到门去找钥匙
			if (a[x][y] >= 'A' && a[x][y] <= 'Z' && (key&(1 << (a[x][y] - 'A'))) == 0)
				continue;


			//在x和y位置的地方由于key是否访问过
			if (visit[x][y][key] == 0)
			{
				visit[x][y][key] = 1;
				que.push(Point(x, y, key, top.step + 1));
			}



		}
	}


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