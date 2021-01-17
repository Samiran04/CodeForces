#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n;
		int arr[n],sum=0,a=0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			if(i!=0)
				sum=sum+arr[i];
			else
				sum=arr[i];
			a=max(sum,a);
		}
		cin>>m;
		sum=0;
		int brr[m],b=0;
		for(int j=0;j<m;j++){
			cin>>brr[j];
			if(j!=0)
				sum=sum+brr[j];
			else
				sum=brr[j];
			b=max(b,sum);
		}
		cout<<max(0,a+b)<<"\n";
	}
	return 0;
}
