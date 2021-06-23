#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int k, n;
		cin>>n>>k;
		
		set<int> st;
		int arr[n];
		
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			st.insert(arr[i]);
		}
		
		if(st.size() > k)
		{
			cout<<-1<<"\n";
			continue;
		}
		
		cout<<n*k<<"\n";
		
		for(int i=0;i<n;i++)
		{
			for(int i=0;i<k-st.size();i++)
				cout<<1<<" ";
			
			for(auto s:st)
				cout<<s<<" ";
		}
		
		cout<<"\n";
		
	}
	
	return 0;
}
