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
		int arr[n],hash[300007]={0},m=-1;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			hash[arr[i]]++;
			m=max(m,arr[i]);
		}
		for(int i=m+1;i>=1;i--)
		{
			if(hash[i]==0&&hash[i-1]>1&&hash[i-2]==1)
			{
				hash[i]=1;
				hash[i-1]-=1;
			}
			else if(hash[i]==0&&hash[i-1]!=0)
			{
				if(i>=2&&hash[i-2]!=0)
				{
					hash[i]=hash[i-1];
					hash[i-1]=0;
				}
				else
				{
					hash[i]=1;
					hash[i-1]-=1;
				}
			}
			else if(hash[i]!=0&&hash[i+1]==0)
			{
				if(hash[i-1]!=0)
				{
					hash[i+1]=hash[i];
					hash[i]=0;
				}
				else
				{
					hash[i+1]=1;
					hash[i]-=1;
				}
			}
		}
		int count=0;
		for(int i=1;i<=m+1;i++)
		{
			//cout<<hash[i]<<" "<<i<<"\n";
			if(hash[i]!=0)
				count++;
		}
		cout<<count<<"\n";
	}
	return 0;
}
