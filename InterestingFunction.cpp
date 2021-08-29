#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int l, r, res = 0;
		cin>>l>>r;
		
		while(l!=0 || r!=0)
		{
			res += (r-l);
			r = r/10;
			l = l/10;
		}
		
		cout<<res<<"\n";
	}
	
	return 0;
}
