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
			
		bool flag = false;
		
		for(int i=0;i<n;i++)
		{
			int val = sqrt(arr[i]);
			
			if(val*val != arr[i])
			{
				flag = true;
				break;
			}
		}
		
		if(flag)
			cout<<"YES";
		else
			cout<<"NO";
			
		cout<<"\n";
	}
	
	return 0;
}
