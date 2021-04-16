#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,q;
	cin>>n>>q;
	long long k;
	cin>>k;
	long long arr[n+1],last[n+1]={0},mid[n+1]={0};
	for(int i=1;i<=n;i++)
		cin>>arr[i];
	mid[1] = arr[1]-1;
	mid[1] += arr[2]-(arr[1]+1);
	for(int i=2;i<=n;i++)
	{
		mid[i] = mid[i-1];
		last[i] = mid[i-1];
		mid[i] += arr[i]-(arr[i-1]+1);
		mid[i] += arr[i+1]-(arr[i]+1);
		last[i] += arr[i]-(arr[i-1]+1);
		last[i] += k-(arr[i]+1);
	}
	while(q--)
	{
		int l,r;
		long long ans = 0;
		cin>>l>>r;
		if(l==r)
			cout<<k-1;
		else
		{
			ans = last[r]-mid[l];
			ans += (arr[l]-1);
			ans += arr[l+1]-(arr[l]+1);
			cout<<ans+1;
		}
		cout<<"\n";
	}
	return 0;
}
