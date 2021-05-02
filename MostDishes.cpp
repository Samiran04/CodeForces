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
		
		int hash[1001];
		
		for(int i=0;i<1001;i++)
			hash[i] = 0;
		
		int count = 1, curr = arr[0];
			
		for(int i=1;i<n;i++)
		{
			if(curr == arr[i])
				count++;
			else
			{
				hash[curr] += count/2 + count%2;
				count = 1;
				curr = arr[i];
			}
		}
		
		hash[curr] += count/2 + count%2;
		
		count = 0;
		
		for(int i=0;i<1001;i++)
		{
			if(hash[i] > count)
			{
				curr = i;
				count = hash[i];
			}
		}
		
		cout<<curr<<"\n";
	}
	
	return 0;
}
