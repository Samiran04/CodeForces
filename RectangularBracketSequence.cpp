#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		int n=str.length();
		if(n%2==0&&str[0]!=')'&&str[n-1]!='(')
			cout<<"YES";
		else
			cout<<"NO";
		cout<<"\n";
	}
	return 0;
}
