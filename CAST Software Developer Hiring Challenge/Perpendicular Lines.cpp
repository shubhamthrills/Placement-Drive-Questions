#include<bits/stdc++.h>
typedef double dd;
using namespace std;

int main()
{
	dd t,x1,y1,x2,y2,x3,y3,x4,y4,m1,m2;
	cin>>t;
	while(t--)
	{
	  	cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
	  
		
		if((x2-x1)==0 ||(x4-x3)==0)
		{
			cout<<"INVALID\n";
			continue;
		}
		
		
			m1= (dd)(y2-y1)/(dd)(x2-x1);
			m2= (dd)(y4-y3)/(dd)(x4-x3);
		
		//	cout<<"--- debug ---- m1 = "<<m1<<"--- m2 = "<<m2<<endl;
		//	cin>>m1>>m2;
		if(round(m1*m2)==-1)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
}
