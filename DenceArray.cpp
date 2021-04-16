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
		
		float arr[n];
		
		for(int i = 0; i < n; i++)
			cin>>arr[i];
		
		int count = 0;
		
		for(int i = 0; i < n - 1; i++)
		{
			
			float M = max(arr[i], arr[i+1]);
			float m = min(arr[i], arr[i+1]);
			
			if(M / m > 2)
			{
				
				while(M / m > 2)
				{
					count++;
					m = m * 2;
				}
			}
		}
		
		cout<<count<<"\n";
	}
	return 0;
}
