#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		long long a, b, n;
		
		cin>>n>>a>>b;
		
		if(a == 1)
		{
			if((n-1)%b == 0)
				cout<<"Yes\n";
			else
				cout<<"No\n";
		}
		else
		{
			bool flag = false;
			long long num = 1;
			
			while(num <= n)
			{
				if(num%b == n%b)
				{
					flag = true;
					break;
				}
				
				num = num*a;
			}
			
			if(flag)
				cout<<"Yes\n";
			else
				cout<<"No\n";
		}
	}
	
	return 0;
}
