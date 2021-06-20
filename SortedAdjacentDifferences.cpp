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
		
		int arr[n];
		
		for(int i=0;i<n;i++)
			cin>>arr[i];
			
		sort(arr, arr+n);
		
		int l = n/2, r = n/2;
		
		if(n%2 == 0)
			l--;
		else
		{
			cout<<arr[l]<<" ";
			l--;
			r++;
		}
		
		while(r<n)
		{
			cout<<arr[l]<<" "<<arr[r]<<" ";
			l--;
			r++;
		}
		
		cout<<"\n";
	}
	
	return 0;
}
