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
		pair<int,int> hash[100001];
		
		for(int i=0;i<100001;i++)
		{
			hash[i].first = 0;
			hash[i].second = 0;
		}
		
		for(int i=0;i<n;i++){
			cin>>arr[i];
			
			if(i%2 == 0)
				hash[arr[i]].first++;
			else
				hash[arr[i]].second++;
		}
		
		bool flag = true;
		
		sort(arr, arr+n);
		
		for(int i=0;i<n;i++)
		{
			if(i%2 == 0)
			{
				if(hash[arr[i]].first == 0)
				{
					flag = false;
					break;
				}
				
				hash[arr[i]].first--;
			}
			else
			{
				if(hash[arr[i]].second == 0)
				{
					flag = false;
					break;
				}
				
				hash[arr[i]].second--;
			}
		}
		
		if(flag)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	
	return 0;
}
