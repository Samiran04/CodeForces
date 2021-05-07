#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		long r, b, d;
		cin>>r>>b>>d;
		
		if(r == b)
		{
			cout<<"YES\n";
			continue;
		}
		
		if(r < b)
			swap(r, b);
			
		long rem = r/b;
		
		if(r%b != 0)
			rem++;
		
		if(abs(rem-1) <= d)
			cout<<"YES";
		else
			cout<<"NO";
		
		cout<<"\n";
	}
	
	return 0;
}
