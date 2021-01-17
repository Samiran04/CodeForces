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
		if(n==1)
			cout<<9;
		else{
			cout<<98;
			int curr=9,m=n-2;
			while(m--)
			{
				cout<<curr;
				curr++;
				if(curr==10)
					curr=0;
			}
		}
		cout<<"\n";
	}
	return 0;
}
