#include <bits/stdc++.h>
using namespace std;

void print(long long arr[],int n)
{
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		long long res1[n],res2[n],sum1=0,sum2=0;
		res1[0]=1;
		res2[0]=arr[0];
		sum1=1;
		sum2=arr[0];
		bool flag=false;
		for(int i=1;i<n;i++)
		{
			if(!flag)
			{
				res1[i]=arr[i];
				sum1+=arr[i];
			}
			else
			{
				res1[i]=1;
				sum1+=1;
			}
			if(flag)
			{
				res2[i]=arr[i];
				sum2+=arr[i];
			}
			else
			{
				res2[i]=1;
				sum2+=1;
			}
			flag=!flag;
		}
		if(sum1>sum2)
		print(res1,n);
		else
		print(res2,n);
		cout<<"\n";
	}
	return 0;
}
