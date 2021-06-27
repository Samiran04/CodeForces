#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--){
		int n, m;
		cin>>n>>m;
		
		int arr[n], brr[m], hash[100001] = {0};
		
		for(int i=0;i<n;i++)
			cin>>arr[i];
		
		for(int i=0;i<m;i++)
			cin>>brr[i];
			
		int j = 0;
		long long res = 0;
		
		for(int i=0;i<m;i++)
		{
			if(hash[brr[i]] == 1){
				res += 1;
				continue;
			}
			
			while(j<n && brr[i] != arr[j])
			{
				hash[arr[j]] = 1;
				j++;
			}
			
			res += 1 + 2*(j - i);
		}
		
		cout<<res<<"\n";	
	}
	
	return 0;
}

