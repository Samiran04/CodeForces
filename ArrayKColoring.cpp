#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, k;
	cin>>n>>k;
	
	int arr[n], hash[5007] = {0}, lar = 0;
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		hash[arr[i]]++;
		lar = max(lar, hash[arr[i]]);
	}
	
	if(lar > k)
		cout<<"NO";
	else
	{
		for(int i=0;i<5007;i++)
			hash[i] = 1;
			
		int hash2[5007] = {0};
			
		lar++;
			
		for(int i=0;i<n;i++)
		{
			int val = arr[i];
			arr[i] = hash[val];
			hash[val]++;
			hash2[arr[i]]++;
		}
		
		int j = 0;
		
		while(lar <= k)
		{
			if(hash2[arr[j]] > 1)
			{
				hash2[arr[j]]--;
				arr[j] = lar;
				lar++;
			}
			j++;
		}
		
		cout<<"YES\n";
		
		for(int i=0;i<n;i++)
			cout<<arr[i]<<" ";
	}
	
	return 0;
}
