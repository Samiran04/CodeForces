#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int a, b, c, x, y;
		
		cin>>a>>b>>c>>x>>y;
		
		int small = min(x, y);
		
		if((a+b+c) != (x+y) ||(small < a && small < b && small < c))
			cout<<"NO";
		else
			cout<<"YES";
		
		cout<<"\n";
	}
	
	return 0;
}
