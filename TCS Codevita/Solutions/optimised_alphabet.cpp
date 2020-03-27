#include<bits/stdc++.h>
using namespace std;

set <int> vect;
int main()
{
	char str[1000];
	int x,num,num1;
	cin>>str;
	for(x=0;x<strlen(str)-1;x++)
	{
		num= (int)(str[x])-'0';
		vect.insert(num);
		num1= (int)(str[x+1])-'0';
		if(num1==7 || num1== 9)
		{
			num= (num-1) % 4;
		}
		else 
		{
			num= (num-1)%3;
		}
		num= (num *10)+num1;
		vect.insert(num);
	}
	num= (int)(str[x])-'0';
	vect.insert(num);
	// for(int x=0;x<vect.size();x++)
	//	cout<<vect[x]<<" ";
	set <int> :: iterator itr;
/*	for (itr = vect.begin(); itr != vect.end(); ++itr)
    {
        cout  << *itr <<" ";
    }
    */
//	sort(vect.begin(), vect.end());
//	vect.erase(unique(vect.begin(),vect.end()),vect.end());
	cout<<vect.size();
}
