#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	string str;
	
	cin>>n;
	cin>>str;
	
	int ans = n;
	
	for(int i=0;i<n;i++)
	{
		int len = (i+1)*2;
		
		if(len <= n)
		{
			string pre = str.substr(0, i+1);
			string suf = str.substr(i+1,i+1);
			
			if(pre == suf)
				ans = min(i+1 + (n-len) + 1, ans);
		}
	}
	
	cout<<ans;
	
	return 0;
}
