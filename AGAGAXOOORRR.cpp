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
		
		long long arr[n+1], pre[n+1];
		
		pre[0] = 0;
		
		for(int i=1;i<=n;i++){
			cin>>arr[i];
			pre[i] = (pre[i-1]^arr[i]);
		}
		
		bool yes = !pre[n];
		
		for(int i=1;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				yes |= (pre[i] == (pre[i]^pre[j]) && pre[i] == (pre[j]^pre[n]));
			}
		}
		
		if(yes)
			cout<<"YES";
		else
			cout<<"NO";
		
		cout<<"\n";
	}
	
	return 0;
}
