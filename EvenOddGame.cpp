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
		int ans=0;
		sort(arr,arr+n,greater<int>());
		for(int i=0;i<n;i++)
		{
			if(arr[i]%2==0)
			{
				if(i%2==0)
					ans+=arr[i];
			}
			else
			{
				if(i%2==1)
					ans-=arr[i];
			}
		}
		if(ans==0)
			cout<<"Tie";
		else if(ans>0)
			cout<<"Alice";
		else
			cout<<"Bob";
		cout<<"\n";
	}
	return 0;
}
