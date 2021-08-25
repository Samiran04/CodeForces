#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		string str, txt;
		
		cin>>str>>txt;
		
		int i = str.length()-1, j = txt.length()-1;
		
		while(i>=0 && j>=0)
		{
			if(str[i] == txt[j])
			{
				i--;
				j--;
			}
			else
				i -= 2;
		}
		
		if(j == -1)
			cout<<"YES";
		else
			cout<<"NO";
			
		cout<<"\n";
	}
	
	return 0;
}
