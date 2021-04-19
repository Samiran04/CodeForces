#include <bits/stdc++.h>
using namespace std;

int get(int a)
{
	int ans = 1, i = 1;
	
	while(i<a)
	{
		ans = ans * 10;
		i++;
	}
	
	return ans;
}

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int a, b, c;
		cin>>a>>b>>c;
		
		int x = get(a);
		int y = get(b);
		
		if(c == a || c == b)
			cout<<x<<" "<<y;
		else if(c == 1)
			cout<<x<<" "<<y+1;
		else
		{
			int z = get(c);
			if(x<y)
				x+=z;
			else
				y+=z;
			cout<<x<<" "<<y;
		}
		
		cout<<"\n";
	}
	
	return 0;
}
