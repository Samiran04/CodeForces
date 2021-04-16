#include <bits/stdc++.h>
using namespace std;

bool check(string res,int n,string str,int m)
{
	int j=0;
	for(int i=0;i<n;i++)
	{
		if(str[j]!=res[i])
			return false;
		j++;
		if(j==m)
			j=0;
	}
	if(j!=0)
		return false;
	return true;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str1,str2;
		cin>>str1>>str2;
		int n1=str1.length(),n2=str2.length();
		if(n1>n2)
		{
			swap(n1,n2);
			swap(str1,str2);
		}
		string res="";
		bool flag=false;
		for(int i=0;i<=40;i++)
		{
			res=res+str2;
			if(check(res,res.length(),str1,n1))
			{
				cout<<res;
				flag=true;
				break;
			}
		}
		if(!flag)
			cout<<-1;
		cout<<"\n";
	}
	return 0;
}
