#include <bits/stdc++.h>
using namespace std;

long long BSearch(long long arr[], int n, long long k)
{
	if(arr[0] > k)
		return n;
	
	if(arr[n-1] < k)
		return 0;
		
	int s = 0, e = n-1;
	
	while(s<e)
	{
		int mid = (s+e)/2;
		
		if(arr[mid] >= k)
			e = mid;
		else
			s = mid+1;
	}
	
	return n-s;
}

int main()
{
	int n;
	cin>>n;
	
	long long arr[n], brr[n], diff[n];
	
	for(int i=0;i<n;i++)
		cin>>arr[i];
		
	for(int i=0;i<n;i++)
		cin>>brr[i];
		
	for(int i=0;i<n;i++)
		diff[i] = arr[i] - brr[i];
		
	long long ans = 0;
	
	sort(diff, diff+n);
	
	for(int i=0;i<n;i++)
	{
		if(diff[i] <= 0)
			ans += BSearch(diff, n, abs(diff[i])+1);
		else
			ans += BSearch(diff, n, diff[i]+1);
	}
	
	long long count = 0, val = diff[0];
	
	for(int i=0;i<n;i++)
	{
		if(val == diff[i])
			count++;
		else
		{
			if(val > 0 && count > 0)
				ans += count*(count-1)/2;
			
			val = diff[i];
			count = 1;
		}
	}
	
	if(val > 0 && count > 0)
		ans += count*(count-1)/2;
	
	cout<<ans;
	
	return 0;
}
