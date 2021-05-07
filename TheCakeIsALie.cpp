#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n, m, k;
		cin>>n>>m>>k;
	
		if(m*n-1 == k)
			cout<<"YES";
		else
			cout<<"NO";
		
		cout<<"\n";
	}
	
	return 0;
}
