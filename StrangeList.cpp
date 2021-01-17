#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,c=INT_MAX,count,pos=0;
		cin>>n;
		long long x,sum=0,arr[n];
		cin>>x;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			count=0;
			long long val=arr[i];
			sum+=arr[i];
			while(val%x==0)
			{
				count++;
				val=val/x;
			}
				if(c>count)
					pos=i;
				c=min(c,count);
		}
		if(c!=INT_MAX)
		{
			sum+=sum*c;
		}
		for(int i=0;i<pos;i++)
			sum+=arr[i];
		cout<<sum<<"\n";
	}
	return 0;
}
