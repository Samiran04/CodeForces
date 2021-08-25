#include <bits/stdc++.h>
using namespace std;

int par1[1001], par2[1001], rank1[1001], rank2[1001];
vector<int> adj1[1001], adj2[1001];

int parent(int par[], int u)
{
	if(u == par[u])
		return u;
	
	par[u] = parent(par, par[u]);
	
	return par[u];
}

void _set(int u, int v, int rank[], int parent[])
{
	if(rank[u] >= rank[v])
	{
		if(rank[u] == rank[v])
			rank[u]++;
		
		parent[v] = u;
	}
	else
		parent[u] = v;
}

int main()
{
	int V, e1, e2;
	vector<vector<int> > res;
	
	cin>>V>>e1>>e2;
	
	for(int i=1;i<=V;i++)
	{
		par1[i] = i;
		par2[i] = i;
		
		rank1[i] = 1;
		rank2[i] = 1;
	}
	
	for(int i=0;i<e1;i++)
	{
		int u, v;
		cin>>u>>v;
		
		adj1[u].push_back(v);
		adj1[v].push_back(u);
		
		_set(par1[u], par1[v], rank1, par1);
	}
	
	for(int i=0;i<e2;i++)
	{
		int u, v;
		cin>>u>>v;
		
		adj1[u].push_back(v);
		adj1[v].push_back(u);
		
		_set(par2[u], par2[v], rank2, par2);
	}
	
	for(int i=1;i<=V;i++)
	{
		for(int j=1;j<=V;j++)
		{
			if(i == j)
				continue;
			
			int u1 = parent(par1, i);
			int v1 = parent(par1, j);
			
			int u2 = parent(par2, i);
			int v2 = parent(par2, j);
			
			if(u1 == v1 || u2 == v2)
				continue;
			
			_set(u1, v1, rank1, par1);
			_set(u2, v2, rank2, par2);
			
			vector<int> vec;
			vec.push_back(i);
			vec.push_back(j);
			
			res.push_back(vec);
		}
	}
	
	cout<<res.size()<<"\n";
	
	for(int i=0;i<res.size();i++)
		cout<<res[i][0]<<" "<<res[i][1]<<"\n";
	
	return 0;
}
