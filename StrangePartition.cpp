#include <bits/stdc++.h>
using namespace std;

long long Ceil(long long x,long long d)
{
	if(x%d==0)
		return x/d;
	return x/d+1;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long x,arr[n],sum=0,res=0;
		cin>>x;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			sum+=arr[i];
			res+=Ceil(arr[i],x);
		}
		cout<<Ceil(sum,x)<<" "<<max(Ceil(sum,x),res);
		cout<<"\n";
	}
	return 0;
}
