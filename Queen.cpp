#include <bits/stdc++.h>
using namespace std;

vector<int> res;

bool dfs(vector<int> adj[], int u, int arr[])
{
	bool ret = false;
	
	for(auto v:adj[u])
		ret = (ret|dfs(adj, v, arr));
		
	if(!ret && arr[u] == 1)
		res.push_back(u);
	
	return (arr[u] != 1);
}

int main()
{
	int n;
	cin>>n;
	
	vector<int> adj[n+1];
	int arr[n+1], root;
	
	for(int i=1;i<=n;i++)
	{
		int p;
		cin>>p>>arr[i];
		if(p != -1)
			adj[p].push_back(i);
		
		if(p == -1)
			root = i;
	}
	
	dfs(adj, root, arr);
	
	sort(res.begin(), res.end());
	
	for(int i=0;i<res.size();i++)
		cout<<res[i]<<" ";
		
	if(res.size() == 0)
		cout<<-1;
		
	return 0;
}
