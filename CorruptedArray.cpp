#include <bits/stdc++.h>
using namespace std;

int solve(int arr[], int n, int k)
{
	long long sum = 0;
	
	for(int i=0;i<n-1;i++)
		sum += arr[i];
		
	for(int i=0;i<n-1;i++)
	{
		if(sum-arr[i] == k)
			return i;
	}
	
	return -1;
}

void print(int arr[], int n, int pos)
{
	for(int i=0;i<n;i++)
	{
		if(i != pos)
			cout<<arr[i]<<" ";
	}
}

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		
		int arr[n+2];
		
		for(int i=0;i<n+2;i++)
			cin>>arr[i];
			
		sort(arr, arr+n+2);
			
		int pos = solve(arr, n+2, arr[n+1]);
		
		if(pos == -1)
		{
			long long sum = 0;
			
			for(int i=0;i<n;i++)
				sum += arr[i];
			
			if(sum == arr[n])
				pos = n;
		}
		
		if(pos == -1)
			cout<<-1;
		else
			print(arr, n+1, pos);
		
		cout<<"\n";
	}
	
	return 0;
}
