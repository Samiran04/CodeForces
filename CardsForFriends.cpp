#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int w,h,n;
		cin>>w>>h>>n;
		int count=1;
		while(w%2==0)
		{
			w=w/2;
			count=2*count;
		}
		while(h%2==0)
		{
			h=h/2;
			count=2*count;
		}
		if(count>=n)
			cout<<"YES";
		else
			cout<<"NO";
		cout<<"\n";
	}
	return 0;
}
