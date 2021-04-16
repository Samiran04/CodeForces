#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
	int n,m;
	cin>>n>>m;
	int arr[n+1],in=0;
	long long cost[m+1],sum=0;
	for(int i=1;i<=n;i++)
		cin>>arr[i];
	for(int i=1;i<=m;i++)
		cin>>cost[i];
	sort(arr+1,arr+(1+n),greater<int>());
	/*for(int i=1;i<=n;i++)
		cout<<arr[i]<<" ";
		cout<<"\n";*/
	for(in=1;in<=m&&in<=n;in++)
	{
		if(cost[arr[in]]>cost[in])
			sum+=cost[in];
		else
			sum+=cost[arr[in]];
	}
	//cout<<sum<<"\n";
	while(in<=n)
	{
		sum+=cost[arr[in]];
		in++;
	}
	cout<<sum<<"\n";
	}
	return 0;
}
