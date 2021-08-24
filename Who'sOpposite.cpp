#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int a, b, c;
		
		cin>>a>>b>>c;
		
		int diff = abs(a-b);
		int size = diff*2;
		
		if(a > size || b > size || c > size)
		{
			cout<<"-1\n";
			continue;
		}
		
		if(c > diff)
			cout<<c-diff;
		else
			cout<<c+diff;
			
		cout<<"\n";
	}
	
	return 0;
}
