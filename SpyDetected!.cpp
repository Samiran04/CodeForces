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
			
		int hash[101] = {0};
		
		for(int i=0;i<n;i++)
			hash[arr[i]]++;
			
		for(int i=0;i<n;i++)
		{
			if(hash[arr[i]] == 1)
			{
				cout<<i+1<<"\n";
				break;
			}
		}
	}
	
	return 0;
}
