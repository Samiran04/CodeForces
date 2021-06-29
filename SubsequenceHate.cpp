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
		
		int n = str.length();
		
		if(n < 3)
		{
			cout<<0<<"\n";
			continue;
		}
		
		bool left0[n], left1[n], right0[n], right1[n];
		
		if(str[0] == '0')
		{
			left0[0] = true;
			left1[0] = false;
		}
		else
		{
			left0[0] = false;
			left1[0] = true;
		}
		
		if(str[n-1] == '0')
		{
			right0[n-1] = true;
			right1[n-1] = false;
		}
		else
		{
			right0[n-1] = false;
			right1[n-1] = true;
		}
		
		for(int i=1;i<n;i++)
		{
			if(str[i] == '0'){
				left0[i] = true;
				left1[i] = left1[i-1];
			}
			else
			{
				left0[i] = left0[i-1];
				left1[i] = true;
			}
		}
		
		for(int i=n-2;i>=0;i--)
		{
			if(str[i] == '0'){
				right0[i] = true;
				right1[i] = right1[i+1];
			}
			else
			{
				right0[i] = right0[i+1];
				right1[i] = true;
			}
		}
		
		bool flag = false;
		
		for(int i=1;i<n-1;i++)
		{
			if(str[i] == '0' && left1[i] && right1[i])
			{
				flag = true;
				break;
			}
			if(str[i] == '1' && left0[i] && right0[i])
			{
				flag = true;
				break;
			}
		}
		
		if(!flag)
		{
			cout<<0<<"\n";
			continue;
		}
		
		int count0 = 0, count1 = 0, pre1 = 0, pre0 = 0;
		
		for(int i=0;i<n;i++)
		{
			if(str[i] == '1')
				count1++;
			else
				count0++;
		}
		
		int ans = min(count0, count1);
		
		for(int i=0;i<n;i++)
		{
			if(str[i] == '0')
			{
				count0--;
				pre0++;
			}
			else
			{
				count1--;
				pre1++;
			}
			
			ans = min(ans, pre1+count0);
			ans = min(ans, pre0+count1);
		}
		
		cout<<ans<<"\n";
	}
	
	return 0;
}
