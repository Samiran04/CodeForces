#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		while(n>=2020&&n%2021!=0)
		{
			n-=2020;
		}
		if(n%2021==0)
			cout<<"YES";
		else
			cout<<"NO";
		cout<<"\n";
	}
	return 0;
}
