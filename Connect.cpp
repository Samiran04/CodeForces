#include <bits/stdc++.h>
using namespace std;

int n, r1, c1, r2, c2;

int getDistance(int x1, int y1, int x2, int y2)
{
	int x = x1-x2;
	int y = y1-y2;
	
	return x*x + y*y;
}

bool check(int x, int y)
{
	return (x>=0 && y>=0 && x<n && y<n);
}

void dfs(vector<string> &arr, vector<vector<bool> > &visit, int x, int y, vector<pair<int,int> > &store)
{
	
	visit[x][y] = true;
	
	store.push_back({x, y});
	
	int dx[] = {0, -1, 0, 1};
	int dy[] = {-1, 0, 1, 0};
	
	for(int i=0;i<4;i++)
	{
		int X = dx[i] + x;
		int Y = dy[i] + y;
		
		if(check(X, Y) && arr[X][Y] == '0' && visit[X][Y] == false)
			dfs(arr, visit, X, Y, store);
	}
}

bool connect(vector<string> &arr, vector<vector<bool> > &visit, int x, int y)
{
	if(x == r2 && y == c2)
		return true;
	
	visit[x][y] = true;
	
	int dx[] = {0, -1, 0, 1};
	int dy[] = {-1, 0, 1, 0};
	
	for(int i=0;i<4;i++)
	{
		int X = dx[i] + x;
		int Y = dy[i] + y;
		
		if(check(X, Y) && arr[X][Y] == '0' && visit[X][Y] == false && connect(arr, visit, X, Y))
			return true;
	}
	
	return false;
}

int main()
{	
	cin>>n>>r1>>c1>>r2>>c2;
	
	r1--;
	r2--;
	c1--;
	c2--;
	
	vector<string> arr(n);
	vector<vector<bool> > visit(n, vector<bool>(n, false));
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	vector<pair<int,int> > start, end;
	
	if(connect(arr, visit, r1, c1))
		cout<<0;
	else
	{
		visit = vector<vector<bool> >(n, vector<bool>(n, false));
		
		dfs(arr, visit, r1, c1, start);
		dfs(arr, visit, r2, c2, end);
		
		int dis = INT_MAX;
		
		for(int i=0;i<start.size();i++)
		{
			for(int j=0;j<end.size();j++)
				dis = min(dis, getDistance(start[i].first, start[i].second, end[j].first, end[j].second));
		}
		
		cout<<dis;
	}
	
	return 0;
}
