#include <bits/stdc++.h>
using namespace std;

bool check(string str, int n, string curr)
{
	int m = curr.length();
	
	for(int i=0;i<=n-m;i++)
	{
		string temp = str.substr(i, m);
		
		if(temp == curr)
			return true;
	}
	
	return false;
}

string solve(string str, int n)
{
	int hash[26] = {0};
	
	for(int i=0;i<n;i++)
		hash[str[i]-'a'] = 1;
	
	for(int i=0;i<26;i++)
	{
		if(hash[i] == 0)
		{
			string res;
			res.push_back('a'+i);
			return res;
		}
	}
	
	for(char i='a';i<='z';i++)
	{
		for(char j='a';j<='z';j++)
		{
			string curr;
			curr.push_back(i);
			curr.push_back(j);
			if(!check(str, n, curr))
				return curr;
		}
	}
	
	for(char k='a';k<='z';k++)
	{
		
		for(char i='a';i<='z';i++)
		{
			for(char j='a';j<='z';j++)
			{
				string curr;
				curr.push_back(k);
				curr.push_back(i);
				curr.push_back(j);
				if(!check(str, n, curr))
					return curr;
			}
		}
	}
	
}

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		
		string str;
		
		cin>>str;
		
		cout<<solve(str, n)<<"\n";
	}
	
	return 0;
}
