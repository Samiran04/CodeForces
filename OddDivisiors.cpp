#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		if(((n-1)&n)==0)
			cout<<"NO";
		else
			cout<<"YES";
		cout<<"\n";
	}
	return 0;
}
