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
		
		string arr[n];
		int changes = 0;
		unordered_map<string, int> hash;
		
		for(int i=0;i<n;i++){
			cin>>arr[i];
			hash[arr[i]]++;
		}
		
		for(int i=0;i<n;i++)
		{
			if(hash[arr[i]] > 1)
			{
				changes++;
				
				hash[arr[i]]--;
				
				while(hash[arr[i]] > 0)
				{
					if(arr[i][3] == '9')
						arr[i][3] = '0';
					else
						arr[i][3]++;
				}
				
				hash[arr[i]]++;
			}
		}
		
		cout<<changes<<"\n";
		
		for(int i=0;i<n;i++)
			cout<<arr[i]<<"\n";
	}
	
	return 0;
}
