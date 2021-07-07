#include <bits/stdc++.h>
using namespace std;

bool check(long long arr[], long long n, long long x, long long k)
{
	long long count = 0;
	
	for(long long i=n/2;i<n;i++)
	{
		if(arr[i]<x)
			count += x-arr[i];
	}
	
	//cout<<x<<" "<<count<<"\n";
	
	return (count <= k);
}

int main()
{
	long long n, k;
	cin>>n>>k;
	
	long long arr[n];
	
	for(long long i=0;i<n;i++)
		cin>>arr[i];
		
	sort(arr, arr+n);
	
	long long s = arr[n/2], e = s+k+10, ans = s;
	
	while(s<e)
	{
		long long mid = (s+e)/2;
		
		if(check(arr, n, mid, k))
		{
			ans = mid;
			s = mid+1;
		}
		else
			e = mid;
	}
	
	cout<<ans;
	
	return 0;
}
