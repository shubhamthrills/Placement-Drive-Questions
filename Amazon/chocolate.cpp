#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,x;
	cin>>n;
	int ar[n],c[n],t=0, tot_candies=0;
	c[0]=1;
	cin>>ar[0];
	for(x=1;x<n;x++)
	{
		cin>>ar[x];
		if(ar[x]>ar[x-1])
		    c[x]=c[x-1]+1;
		else
			c[x]=1;
	}
	tot_candies= c[n-1];
	for(x=n-2;x>=0;x--)
	{
		t=1;	
		if(ar[x]>ar[x+1])
		{
			t= c[x+1]+1;
		}
		tot_candies += max(t,c[x]);
		c[x]=t;
	}
	if(n==0)
	cout<<"0";
	else
	cout<<tot_candies;
}
