#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		
		long long arr[n], brr[n], res[n+1];
		
		unordered_map<long long, vector<long long>> mp;
		unordered_set<long long> st;
		
		for(int i=0;i<n;i++){
			cin>>arr[i];
			st.insert(arr[i]);
		}
			
		for(int i=0;i<n;i++)
		{
			cin>>brr[i];
			mp[arr[i]].push_back(brr[i]);
			res[i+1] = 0;
		}
		
		for(auto s:st)
		{
			sort(mp[s].begin(), mp[s].end(), greater<long long>());
		}
		
		for(auto s:st)
		{
			long long sum = 0;
			
			for(int i=0;i<mp[s].size();i++)
			{
				sum += mp[s][i];
				mp[s][i] = sum;
			}
		}
		
		for(auto m:mp)
		{
			int len = 1, l = m.second.size();
			
			for(int i=0;i<m.second.size();i++)
			{
				res[len] += m.second[(l/len)*len-1];
				len++;
			}
		}
		
		for(int i=1;i<=n;i++)
			cout<<res[i]<<" ";
			
		cout<<"\n";
	}
	
	return 0;
}
