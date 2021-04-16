#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(string str, int s, int e)
{
	while(s < e)
	{
		if(str[s] != str[e])
			return false;
			
		s++;
		e--;
	}
	
	return true;
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
		
		if(!is_palindrome(str+"a", 0, n))
		{
			cout<<"YES\n";
			cout<<str+"a"<<"\n";
		}
		else if(!is_palindrome("a"+str, 0, n))
		{
			cout<<"YES\n";
			cout<<"a"+str<<"\n";
		}
		else{
			cout<<"NO\n";
		}
	}
	
	return 0;
}
