#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		set<int>s;
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			s.insert(a);
		}
		if(s.size()>k)
			cout<<-1;
		else
		{
			cout<<k*n<<"\n";
			for(int i=0;i<n;i++)
			{
				for(auto a:s)
				{
					cout<<a<<" ";
				}
				for(int j=0;j<k-(int)(s.size());j++)
					cout<<1<<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}
