#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		string str, tar;
		
		cin>>n;
		cin>>str>>tar;
		
		int last = 0, count0 = 0, count1 = 0;
		bool flag = true, ans = true;
		
		for(int i=0;i<n;i++)
		{
			if(str[i] != tar[i])
				flag = false;
			
			if(str[i] == '0')
				count0++;
			else
				count1++;
			
			if(count0 == count1 && flag == false)
			{
				int j = i;
				
				while(last<=j){
					
					if(str[j] == tar[j]){
						ans = false;
						break;
					}
					j--;
				}
				
				last = i+1;
				flag = true;
			}
			else if(count0 == count1 && flag == true)
			{
				last = i+1;
			}
			
			if(i == n-1 && count0 != count1 && !flag)
			{
				ans = false;
			}
		}
		
		if(ans)
			cout<<"YES";
		else
			cout<<"NO";
			
		cout<<"\n";
	}
	return 0;
}
