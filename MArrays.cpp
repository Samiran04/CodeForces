#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n, m;
		cin>>n>>m;
		
		int arr[n];
		
		int hash[m] = {0}, ans = 0;
		
		for(int i=0;i<n;i++){
			cin>>arr[i];
			hash[arr[i]%m]++;
		}
		
		int s = 1, e = m-1;
		
		while(s<e)
		{
			if(hash[s] == 0)
				ans += hash[e];
			else if(hash[e] == 0)
				ans += hash[s];
			else
			{
				ans++;
				if(hash[s] > hash[e])
					ans += hash[s]-hash[e]-1;
				else if(hash[e] > hash[s])
					ans += hash[e]-hash[s]-1;
			}
			s++;
			e--;
		} 
		
		if(m%2 == 0 && hash[m/2])
			ans++;
		
		if(hash[0])
			ans++;
			
		cout<<ans<<"\n";
	}
	
	return 0;
}
