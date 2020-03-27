#include<bits/stdc++.h>
using namespace std;

int main()
{
	long m,n,r,c,s=0;
	cin>>m>>n;
	long ar[m][n];
	vector<int> lis[m],l1;
	for(r=0;r<m;r++)
	{
		for(c=0;c<n;c++)
		   {
		   	cin>>ar[r][c];
		   	lis[r].push_back(ar[r][c]);
		   }
		   l1.push_back(ar[r][c]);
	}
	for(r=0;r<(m*n);r++)
	{
		cout<<*max_element(l1.begin(), l1.end());
		lis[max_element(l1.begin(), l1.end())]
		
	}
	
	
}
