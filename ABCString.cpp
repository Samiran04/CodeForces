#include <bits/stdc++.h>
using namespace std;

bool solve(string str, int n)
{
	int ch1 = str[0], ch2 = str[n-1], count1 = 0, count2 = 0;
	
	if(ch1 == ch2)
		return false;
	
	bool flag1 = false, flag2 = false;
		
	for(int i=0;i<n;i++)
	{
		if(str[i] == ch1)
		{
			count1++;
			count2++;
		}
		else if(str[i] == ch2)
		{
			count1--;
			count2--;
		}
		else
		{
			count1++;
			count2--;
		}
		
		if(count1<0)
			flag1 = true;
		
		if(count2<0)
			flag2 = true;
		
		if(flag1 && flag2)
			return false;
	}
	
	if(count1 == 0 && flag1 == false)
		return true;
		
	if(count2 == 0 && flag2 == false)
		return true;
	
	return false;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		
		int n = str.length();
		
		if(solve(str, n))
			cout<<"YES";
		else
			cout<<"NO";
		cout<<"\n";
	}
	return 0;
}
