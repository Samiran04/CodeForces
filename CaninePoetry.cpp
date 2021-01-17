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
		int hash[4],count=0,ans=0;
		char c;
		hash[2]=1;
		hash[3]=2;
		for(int i=0;i<n;i++)
		{
			if(i==0)
			{
				count=1;
				c=str[i];
			}
			else if(str[i]==c)
			{
				count++;
			}
			else if(str[i]!=c)
			{
				if(count==2)
				{
					ans+=hash[count];
					str[i-1]='3';
				}
				else if(count==1&&i>=2&&str[i-2]>='a'&&str[i]==str[i-2])
				{
					str[i]='4';
					ans++;
					count=0;
				}
				count=1;
				c=str[i];
			}
			if(count==3)
			{
				c='1';
				str[i-1]='2';
				str[i-2]='9';
				str[i]='8';
				ans+=hash[count];
				count=0;
			}
		}
		if(count==2)
			ans++;
		cout<<ans<<"\n";
	}
	return 0;
}
