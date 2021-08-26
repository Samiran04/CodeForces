#include <bits/stdc++.h>
using namespace std;

struct cell {
	double hash[5], total;
	int ch;
};

bool my_comp(cell &a, cell &b)
{
	int ch = a.ch;
	
	double fre1 = a.hash[ch]-(a.total-a.hash[ch]);
	double fre2 = b.hash[ch]-(b.total-b.hash[ch]);
	
	/*if(a.hash[ch] == a.total)
		fre1 = a.hash[ch];
	
	if(b.hash[ch] == b.total)
		fre2 = b.hash[ch];*/
	
	return fre1 > fre2;
}

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n, res = 0;
		cin>>n;
		
		string arr[n];
		cell words[n];
		
		for(int i=0;i<n;i++)
			cin>>arr[i];
			
		for(int i=0;i<n;i++)
		{
			int hash[5] = {0};
			
			for(int j=0;j<arr[i].length();j++)
				hash[arr[i][j]-'a']++;
			
			for(int j=0;j<5;j++)
				words[i].hash[j] = hash[j];
			
			words[i].total = arr[i].length();
		}
		
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<n;j++)
				words[j].ch = i;
			
			sort(words, words+n, my_comp);
			
			int count = 0, fre1 = 0, fre2 = 0;
			
			for(int j=0;j<n;j++)
			{
				fre1 += words[j].hash[i];
				fre2 += (words[j].total-words[j].hash[i]);
				
				if(fre1 <= fre2)
				{
					/*fre1 -= words[j].hash[i];
					fre2 -= (words[j].total-words[j].hash[i]);
					continue;*/
					break;
				}
				
				count++;
			}
			
			/*if(i == 2)
			{
				for(int j=0;j<n;j++)
				{
					for(int k=0;k<5;k++)
						cout<<words[j].hash[k]<<" ";
					
					cout<<"\n";
				}
			}*/
			
			res = max(res, count);
		}
		
		cout<<res<<"\n";
	}	
	
	return 0;
}
