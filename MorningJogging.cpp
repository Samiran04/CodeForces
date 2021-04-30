#include <bits/stdc++.h>
using namespace std;

struct cell{
	int x, y;
	long long val;
	
	cell(){
	}
	
	cell(int X, int Y, long long V)
	{
		x = X;
		y = Y;
		val = V;
	}
};

struct my_sort
{
	bool operator ()(cell a, cell b)
	{
		return a.val < b.val;
	}
};

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n, m;
		cin>>n>>m;
		
		long long arr[n][m];
		
		priority_queue<cell, vector<cell>, my_sort> p;
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>arr[i][j];
				
				if(i == 0)
					p.push(cell(i, j, arr[i][j]));
				else if(i != 0 && p.top().val > arr[i][j])
				{
					p.pop();
					p.push(cell(i, j, arr[i][j]));
				}
			}
		}
		
		int i = 0;
		
		int res[n][m];
		bool done[n][m];
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				done[i][j] = false;
				res[i][j] = INT_MAX;
			}
		}
		
		while(!p.empty())
		{
			cell temp = p.top();
			p.pop();
			
			int x = temp.x;
			int y = temp.y;
			
			res[x][i] = arr[x][y];
			done[x][y] = true;
			i++;
		}
		
		for(int i=0;i<n;i++)
		{
			int k = 0;
			for(int j=0;j<m&&k<m;j++)
			{
				if(done[i][j] == true)
					continue;
				else if(res[i][k] != INT_MAX)
				{
					k++;
					j--;
					continue;
				}
				
				res[i][k] = arr[i][j];
			}
		}
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cout<<res[i][j]<<" ";
			}
			cout<<"\n";
		}
	}
	
	return 0;
}
