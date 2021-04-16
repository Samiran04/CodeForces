#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long a,b;
		cin>>a>>b;
		long long count = 10000000000,pre=0,c=0,extra=0,itr=0;
		while(1)
		{
			int A=a,B=b+itr;
			if(b==1)
			{
				b=2;
				extra=1;
				continue;
			}
			while(A!=0)
			{
				if(A==B)
				{
					c+=2;
					break;
				}
				A=A/B;
				c++;
			}
			c+=(extra+itr);
			count=min(count,c);
			itr++;
			if(itr==1000)
				break;
			pre=c;
			c=0;
		}
		cout<<count<<"\n";
	}
	return 0;
}
