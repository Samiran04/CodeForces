#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll pre[200007]={0},arr[200007],P[200007];
int n,q;

int BSearch(ll p,ll m,int s,int e)
{
	if(p>=pre[n-1]-m)
		return -1;
	while(s<e)
	{
		int mid=s+(e-s)/2;
		if((pre[mid]-m)==p)
			return mid;
		if((pre[mid]-m)<p)
			s=mid+1;
		else
			e=mid;
	}
	if(s>=n)
		return -1;
	return s;
}

void solve()
{
	pre[0]=arr[0];
	for(int i=1;i<n;i++)
		pre[i]=pre[i-1]+arr[i];
	ll m=0;
	int s=0,e=n-1;
	for(int i=0;i<q;i++)
	{
		int pos=BSearch(P[i],m,s,e);
		if(pos==-1)
		{
			cout<<n;
			s=0,e=n-1;
			m=0;
		}
		else
		{
			if(pre[pos]-m==P[i])
			{
					cout<<n-pos-1;
					m+=P[i];
			}
			else
			{
				cout<<n-pos;
				s=pos;
				m+=P[i];
			}
		}
		cout<<"\n";
	}
}

int main()
{
	cin>>n>>q;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<q;i++)
		cin>>P[i];
	solve();
	return 0;
}
