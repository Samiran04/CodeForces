#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n, k;
		cin>>n>>k;
		
		int arr[n];
		
		for(int i=0;i<n;i++)
			cin>>arr[i];
			
		int l = 0;
		
		while(l<n-1 && k)
		{
			if(arr[l] == 0){
				l++;
				continue;
			}
			
			arr[l]--;
			arr[n-1]++;
			
			k--;
		}
		
		for(int i=0;i<n;i++)
			cout<<arr[i]<<" ";
			
		cout<<"\n";
	}
	
	return 0;
}
