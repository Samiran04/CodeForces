#include <bits/stdc++.h>
using namespace std;

long long gcd(long long x, long long y)
{
	if(x%y == 0)
		return y;
	
	return gcd(y, x%y);
}

long long lcm(long long x, long long y)
{
	return (x/gcd(x, y))*y;
}

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		long long n, res = 0, mod = 1000000007, G = 1;
		cin>>n;
		
		if(n == 1)
		{
			cout<<2<<"\n";
			continue;
		}
		
		for(long long i=2;G<=n;i++)
		{
			long long pre = G;
			G = lcm(G, i);
			res = (res + (i*(n/pre-n/G)%mod)%mod)%mod;
		}
		
		cout<<res<<"\n";
	}
	
	return 0;
}
