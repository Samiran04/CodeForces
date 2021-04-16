#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int hash[101]={0},Max=-1,n,a;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			hash[a]++;
			Max=max(Max,hash[a]);
		}
		cout<<Max<<"\n";
	}
	return 0;
}
