#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, u, r, d, l;
		cin>>n>>u>>r>>d>>l;
		
		bool flag = false;
		
		for(int i=0;i<=16;i++)
		{
			int ru = u, rr = r, rd = d, rl = l;
			
			if(1 & i)
			{
				ru--;
				rl--;
			}
			if(2 & i)
			{
				rl--;
				rd--;
			}
			if(4 & i)
			{
				rd--;
				rr--;
			}
			if(8 & i)
			{
				rr--;
				ru--;
			}
			
			if(min(ru, min(rl, min(rr, rd))) >=0 && max(ru, max(rl, max(rr, rd))) <= n-2)
			{
				flag = true;
				break;
			}
		}
		
		if(flag)
			cout<<"YES";
		
		else
			cout<<"NO";
		
		cout<<"\n";
	}
	return 0;
}
