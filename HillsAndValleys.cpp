#include <bits/stdc++.h>
using namespace std;

long long arr[300001];
int n;

int is_hill(int i)
{
	return(i>0&&i<n-1&&arr[i]>arr[i-1]&&arr[i]>arr[i+1]);
}

int is_vally(int i)
{
	return(i>0&&i<n-1&&arr[i]<arr[i-1]&&arr[i]<arr[i+1]);
}

void solve()
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int s=0,store[n];
	for(int i=0;i<n;i++)
		store[i]=0;
	for(int i=1;i<n-1;i++)
	{
		if(is_hill(i)==1||is_vally(i)==1)
		{
			store[i]=1;
			s++;
		}
	}
	int ans=s;
	for(int i=1;i<n-1;i++)
	{
		long long temp=arr[i];
		arr[i]=arr[i-1];
		ans=min(ans,s-store[i-1]-store[i]-store[i+1]+is_hill(i)+is_vally(i)+is_hill(i-1)+is_vally(i-1)+is_hill(i+1)+is_vally(i+1));
		arr[i]=arr[i+1];
		ans=min(ans,s-store[i-1]-store[i]-store[i+1]+is_hill(i)+is_vally(i)+is_hill(i-1)+is_vally(i-1)+is_hill(i+1)+is_vally(i+1));
		arr[i]=temp;
	}
	cout<<ans<<"\n";
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}
