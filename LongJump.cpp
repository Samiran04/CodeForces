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
		long long dp[n+1],arr[n+1];
		for(int i=1;i<=n;i++)
		{
			dp[i]=0;
			cin>>arr[i];
		}
		long long ans=0;
		for(int i=1;i<=n;i++)
		{
			if(i+arr[i]>n)
				ans=max(ans,dp[i]+arr[i]);
			else
			{
				dp[i+arr[i]]=max(dp[i+arr[i]],dp[i]+arr[i]);
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}
