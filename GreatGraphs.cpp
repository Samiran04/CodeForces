#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		long long n;
		cin>>n;
		
		long long arr[n], res = 0;
		
		for(int i=0;i<n;i++)
			cin>>arr[i];
		
		sort(arr+1, arr+n);
		
		for(int i=0;i<n-1;i++)
			res += (arr[i+1]-arr[i]);
		
		for(int i=n-2;i>=0;i--)
		{
			long long diff = arr[i] - arr[i+1];
			long long right = n-i-1;
			long long left = i+1;
			
			res = (res + diff * left * right);
		}
		
		cout<<res<<"\n";
	}
	
	return 0;
}
