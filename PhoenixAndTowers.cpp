#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--){
		int n, m, x;
		
		cin>>n>>m>>x;
		
		int arr[n];
		
		for(int i=0;i<n;i++)
			cin>>arr[i];
			
		priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> p;
		
		for(int i=1;i<=m;i++)
			p.push({0, i});
			
		int ans[n];
		
		for(int i=0;i<n;i++)
		{
			pair<int,int> curr = p.top();
			p.pop();
			
			ans[i] = curr.second;
			curr.first += arr[i];
			
			p.push(curr);
		}
		
		int sum = (p.top()).first;
		
		bool flag = true;
		
		while(!p.empty())
		{
			int curr_sum = (p.top()).first;
			p.pop();
			
			if(abs(curr_sum - sum) > x)
			{
				flag = false;
				break;
			}
			
			sum = curr_sum;
		}
		
		if(flag)
		{
			cout<<"YES\n";
			
			for(int i=0;i<n;i++)
				cout<<ans[i]<<" ";
				
			cout<<"\n";
		}
		else
			cout<<"NO\n";	
	}
	
	return 0;
}
