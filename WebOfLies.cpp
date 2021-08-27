#include <bits/stdc++.h>
using namespace std;

struct cell {
	int count, status;
	
	cell() {
		count = 0;
		status = 1;
	}
};

void change(int u, int v, vector<cell> &arr, int type, int &count)
{
	if(type == 1)
	{
		if(u < v)
			swap(u, v);
		
		if(arr[v].status == 1)
			count--;
			
		arr[v].status = 0;
		arr[v].count++;
	}
	else
	{
		if(u < v)
			swap(u, v);
			
		arr[v].count--;
		
		if(arr[v].count == 0){
			arr[v].status = 1;
			count++;
		}
	}
}

int main()
{
	int n, m, res;
	cin>>n>>m;
	
	res = n;
	
	vector<cell> arr(n+1);
	
	for(int i=0;i<m;i++)
	{
		int u, v;
		cin>>u>>v;
		
		change(u, v, arr, 1, res);
	}
	
	int q, type;
	
	cin>>q;
	
	while(q--)
	{
		cin>>type;
		int u, v;
		
		if(type == 3)
			cout<<res<<"\n";
		else if(type == 1)
		{
			cin>>u>>v;
			change(u, v, arr, type, res);
		}
		else
		{
			cin>>u>>v;
			change(u, v, arr, type, res);
		}
	}
	
	return 0;
}
