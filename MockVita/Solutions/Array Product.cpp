#include <bits/stdc++.h>
using namespace std;
void get_input(int ar[])
{
	char str[10000];
	int x=0;
	cin>>str;
	char *token=strtok(str,",");
	while(token!=NULL)
	{
		ar[x++]=atoi(&token[0]);
		token=strtok(NULL,",");
	}	
}
int main()
{
	int n,k,x=0;
	long long prod=1;
	vector <int> vect;
	cin>>n>>k;
	int ar[n];
	for(x=0;x<n;x++)
	{
		cin>>ar[x];
		prod*=ar[x];
	}
	vect.push_back(1);
	vect.push_back(1);
	vect.push_back(1);
	for(x=2;x<=sqrt(prod);x++)
	{
		if(prod%x==0)
		{
			vect.push_back(x);
			vect.push_back(x);
			vect.push_back(x);
			vect.push_back(prod/x);
		}
	}
}
