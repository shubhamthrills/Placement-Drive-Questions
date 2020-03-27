#include<bits/stdc++.h>
typedef double dd;
using namespace std;

int main()
{
	long long x,ab[2]={0,0};
	int n;
	cin>>n;
	int ar[n];
	for(x=0;x<n;x++)
	{
		cin>>ar[x];
	}
	vector<int> vect(ar,ar+n);
	x=0;
	do
	{
		if(n%2==1)
		{
			ab[x]+= vect[n/2];
			vect.erase(vect.begin()+(n/2)-1);
		}
		else
		{
			if(vect[n/2]>vect[(n/2)+1])
			   {
			     ab[x]+= vect[n/2];
			     vect.erase(vect.begin()+(n/2)-1);
			   }
			else
				{
				 ab[x]+= vect[(n/2)+1];
			     vect.erase(vect.begin()+(n/2));
				}
		}
		n--;
		x=x==0?1:0;
		
	}while(n==0);
	cout<<"---Debug-- alice = "<<ab[0]<<" -- bob = "<<ab[1]<<endl;
	if(ab[0]>=ab[1])
	cout<<"Alice "<<ab[0]-ab[1];
	else
	cout<<"Bob "<<ab[1]-ab[0];
}
