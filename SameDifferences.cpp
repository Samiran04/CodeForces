#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n, M = 1000000007;
		
		cin>>n;
		
		int arr[n];
		
		for(int i=0;i<n;i++)
			cin>>arr[i];
			
		unordered_map<int,int> mp;
			
		for(int i=0;i<n;i++)
			mp[arr[i]-i]++;
		
		long long count = 0;
		
		for(auto m:mp)
		{
			long long c = m.second;
			count = count+((c-1)*c/2);
		}
		
		cout<<count<<"\n";
	}
	
	return 0;
}
